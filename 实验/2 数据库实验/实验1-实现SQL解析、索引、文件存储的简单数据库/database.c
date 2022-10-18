

#include<stdio.h>


#define NOT_VALID 0
#define VALID 1


typedef struct {
	int key;
	long Fpos;
	long Ipos ;
	int valid;	
}Index;
Index index[10] ;



void select(FILE* fp, int key){
	int col1, col2 ;
	long pos= index[key].Fpos;
	fseek(fp, pos, SEEK_SET) ;
	fscanf(fp, "%d %d %d",&key,&col1,&col2) ;
	//printf("%d: %ld\n",key, pos) ;
	
	printf("%d %d %d\n", key, col1, col2) ;
}
int main(){
/*
	sql interpreter
		C a.db: create file a.db as database
			char fname[10]
			scanf("%c %s", &op, fname) ;
			FILE* fp = fopen(fname, "rw") ; 
			FILE* ifp= fopen(fname.index,"rw");
			
			idx=0;
			while(!feof(fp)){
				fgets("%d%d%d",index[idx].key, index[idx].pos, index[idx].val) ;
				idx++;
			}
		I a.db 1 2 3: insert into a.db values(1,2,3)
			fseek(fp,0, SEEK_END);    // move rw position to the end to write
			int pos = ftell( fp) ;    // rw postion
			index[key]={key,pos,1} ;  // 1 indicates that the index of key is 
						   // valid, key has not been deleted
			fputs("%d,%d,%d",key,col1,col2) ;	
			
		D 1 from a.db: delete from a.db where key=1
			int valid = index[key].valid;
			if not valid:
				printf("dont exit") ;
				return ;
			index[key].valid = NOT_VALID
		U 1 (3,4) from a.db: update a.db set col1=3, col2=4 where key=1
			int valid=index[1].valid;
			if not valid:
				printf("dont exit") ;
				return ;
			int pos = index[1].pos;
			fseek(fp, pos, SEEK_SET);
			fputs(%d,%d,%d",key,col1,col2) ;
	 	S 1 from a.db: select * from a.db where key=1
	 		int valid=index[1].valid;
	 		if not valid:
	 			printf("don't exist")    ;
	 			return ;
	 		int pos= index[1].pos;
	 		fseek(fp, pos, SEEK_SET) ;
	 		fgets("%d,%d,%d",&key,&col1,&col2) ;
	
	index
		use hash table to index
		in MySQl, use B+ tree to index
	
	storage
		use file to store database file
*/
	/*
	stdio/stderr, scanf/printf, gets/puts
	fileio, fscanf/fprintf, fgets/fputs
	*/
	char fname[20] ;
	char idxname[40] ;
	char row[100];
	FILE *fp, *ifp ;
	char op ;
	int cnt ;
	while(1){
		printf("Command C, I, D, U, S, P, Q: ") ;
		gets(row);
		
		if( row[0] == 'Q'){
			break ;
		}else if( row[0]=='C' ){
			sscanf(row, "C %s", fname) ;
			
			sprintf(idxname, "%s.idx", fname) ;
		
			if( !(fp = fopen(fname,"r") ) ){
				fp = fopen(fname,"w") ;
				fclose(fp) ;
			}
			fp = fopen(fname,"r+") ;
			
			if( !(ifp = fopen(idxname,"r") ) ){
				ifp = fopen(idxname,"w") ;
				fclose(ifp) ;
			}
			ifp = fopen(idxname,"r+") ;
			 
			int idx=1;
			//printf("Index:\n") ;
			while(!feof(ifp)){
				fscanf(ifp,"%d %ld %ld %d",&index[idx].key, &index[idx].Fpos, &index[idx].Ipos, &index[idx].valid) ;
			
				idx++;
			}
			cnt = idx-1 ;
			printf("Comand C: cnt=%d\n",cnt) ;
		}else if( row[0] == 'I'){
			int key= cnt++, col1, col2 ;
			sscanf(row, "I %d %d", &col1, &col2) ;
		
			fseek(fp,0, SEEK_END);    // move rw position to the end to write
			long pos = ftell( fp) ;    // rw postion
			
			fseek(ifp,0, SEEK_END);
			long Ipos = ftell( ifp) ;
			index[key].key = key ;
			index[key].Fpos = pos ;
			index[key].Ipos = Ipos ;
			index[key].valid = VALID ;  // 1 indicates that the index of key is 
						   // valid, key has not been deleted
			fprintf(fp, "%d %d %d\n",key,col1,col2) ;
			
			fprintf(ifp, "%d %ld %ld %d\n", key, pos, Ipos, VALID) ;
			
			printf("%d: %d %d, Fpos=%ld Ipos=%ld %d\n", key, col1, col2, pos, Ipos, VALID) ;
		}else if( row[0] == 'D'){
			int key, col1, col2 ;
			sscanf(row, "D %d", &key) ;
		
			int valid = index[key].valid;
			if( key<1 || key>=cnt || !valid){
				printf("invalid id\n") ;
				continue ;
			}
			index[key].valid = NOT_VALID ;
			fseek(ifp, index[key].Ipos, SEEK_SET) ;
			fprintf(ifp, "%d %ld %ld %d\n", key, index[key].Fpos, index[key].Ipos, NOT_VALID) ;
			
			printf("%d: de-Valid\n",key) ;
		}else if( row[0] == 'U'){
			int key, col1, col2 ;
			sscanf(row, "U %d %d %d", &key, &col1, &col2) ;
			
			int valid = index[key].valid;
			if( key<1 || key>=cnt || !valid){
				printf("invalid id\n") ;
				continue ;
			}
			
			long pos = index[key].Fpos;
			fseek(fp, pos, SEEK_SET);
			fprintf(fp, "%d %d %d\n",key,col1,col2) ;
			
			printf("%d: update\n",key) ;
		}else if( row[0] == 'S'){
			int key, col1, col2 ;
			sscanf(row, "S %d", &key) ;
			
			int valid = index[key].valid;
			if( key<1 || key>=cnt || !valid){
				printf("invalid id\n") ;
				continue ;
			}
			
			select(fp, key) ;
	 	}else if( row[0] == 'P'){
			if( row[1]=='F'){ //display databasea
				for( int i=1;i<cnt;i++){
		 			if( index[i].valid == VALID){
		 				select(fp, i) ;
		 			}
		 		}
		 	}else if( row[1]=='I'){//display index file
		 		for(int i=1;i<cnt;i++){
		 			
		 			if( index[i].valid == VALID){
		 				printf("%d %ld %ld %d\n",index[i].key, index[i].Fpos, index[i].Ipos, index[i].valid) ;
		 			}
		 		}
		 	}
	 	}
		
	}
	fclose(fp) ;
	fclose(ifp) ;
	
	return 0;
}
