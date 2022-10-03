


all: a.c b.s 
	gcc -o a a.c b.s

b.s: b.c
	gcc -E b.c -o b.i
	gcc -S b.i -o b.s


