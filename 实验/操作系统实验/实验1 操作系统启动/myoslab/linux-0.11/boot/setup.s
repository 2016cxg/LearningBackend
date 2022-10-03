!
!	setup.s		(C) 1991 Linus Torvalds
!
! setup.s is responsible for getting the system data from the BIOS,
! and putting them into the appropriate places in system memory.
! both setup.s and system has been loaded by the bootblock.
!
! This code asks the bios for memory/disk/other parameters, and
! puts them in a "safe" place: 0x90000-0x901FF, ie where the
! boot-block used to be. It is then up to the protected mode
! system to read them from there before the area is overwritten
! for buffer-blocks.
!

! NOTE! These had better be the same as in bootsect.s!

INITSEG  = 0x9000	! we move boot here - out of the way
SETUPSEG = 0x9020	! this is the current segment

entry start
start:
! Cursor
	mov ax,#INITSEG
	mov ds,ax
	mov ah,#0x03
	xor bh,bh
	int 0x10
	mov [0],dx
	
! Get memory size (extended mem, kB)

	mov	ah,#0x88
	int	0x15
	mov	[2],ax

! copy disk parameters
	mov ax,#0x0000
	mov ds,ax
	lds si,[4*0x41]
	mov ax,#INITSEG
	mov es,ax
	mov di,#0x0004
	mov cx,#0x10
	rep
	movsb


	mov ax, #INITSEG
	mov ds, ax
	mov ax, cs
	mov es, ax
	

	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	mov	cx,#13
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	bp,#cursor_msg
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	
	mov 	dx,[0]
	call print_hex


	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	mov	cx,#14
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	bp,#memory_msg
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	
	mov 	dx,[2]
	call print_hex


	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	mov	cx,#12
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	bp,#cylinder_msg
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	
	mov 	dx,[4]
	call print_hex


	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	mov	cx,#8
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	bp,#head_msg
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	
	mov 	dx,[6]
	call print_hex


	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	mov	cx,#10
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	bp,#sector_msg
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	
	mov 	dx,[18]
	call print_hex

	jmpi 0, 0x9060

	

print_hex:
	mov cx,#4
print_digit:
	rol dx,#4
	mov ax,#0xe0f
	and al,dl
	add al,#0x30
	cmp al,#0x3a
	jl outp
	add al,#0x07
outp:
	int 0x10
	loop print_digit
	ret

print_nl:
	mov ax,#0xe0d
	int 0x10
	mov al,#0xa
	int 0x10
	ret

	! mov	cx,#41 			! msg size
	! mov	bp,#msg1		! msg stored in bp
print_msg:
	mov	ah,#0x03		! read cursor pos
	xor	bh,bh
	int	0x10
	
	mov	bx,#0x0007		! page 0, attribute 7 (normal)
	mov	ax,#0x1301		! write string, move cursor
	int	0x10
	ret


cursor_msg:
	.byte 13,10
	.ascii "Cursor POS:"

memory_msg:
	.byte 13,10
	.ascii "Memory Size:"

cylinder_msg:
	.byte 13,10
	.ascii "Cylinders:"

head_msg:
	.byte 13,10
	.ascii "Heads:"

sector_msg:
	.byte 13,10
	.ascii "Sectors:"

