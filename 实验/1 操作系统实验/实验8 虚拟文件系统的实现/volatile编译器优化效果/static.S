	.file	"static.c"
	.text
	.section	.tdata,"awT",@progbits
	.align 4
	.type	var.2533, @object
	.size	var.2533, 4
var.2533:
	.long	5
	.section	.rodata
	.align 8
.LC0:
	.string	"Thread ID:[%d], Value of var: %d\n"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%fs:var.2533@tpoff, %eax
	addl	$5, %eax
	movl	%eax, %fs:var.2533@tpoff
	movl	%fs:var.2533@tpoff, %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func, .-func
	.section	.tdata
	.align 4
	.type	var.2537, @object
	.size	var.2537, 4
var.2537:
	.long	10
	.text
	.globl	func1
	.type	func1, @function
func1:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%fs:var.2537@tpoff, %eax
	addl	$5, %eax
	movl	%eax, %fs:var.2537@tpoff
	movl	%fs:var.2537@tpoff, %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	func1, .-func1
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -80(%rbp)
	movl	$2, -76(%rbp)
	movl	$3, -72(%rbp)
	movl	$4, -68(%rbp)
	movl	$5, -64(%rbp)
	movl	$0, -92(%rbp)
	jmp	.L6
.L7:
	leaq	-80(%rbp), %rax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	-48(%rbp), %rax
	movl	-92(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$3, %rcx
	addq	%rcx, %rax
	leaq	func(%rip), %rsi
	movq	%rax, %rdi
	call	thrd_create@PLT
	addl	$1, -92(%rbp)
.L6:
	cmpl	$1, -92(%rbp)
	jle	.L7
	movl	$2, -88(%rbp)
	jmp	.L8
.L9:
	leaq	-80(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	-48(%rbp), %rax
	movl	-88(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$3, %rcx
	addq	%rcx, %rax
	leaq	func1(%rip), %rsi
	movq	%rax, %rdi
	call	thrd_create@PLT
	addl	$1, -88(%rbp)
.L8:
	cmpl	$4, -88(%rbp)
	jle	.L9
	movl	$0, -84(%rbp)
	jmp	.L10
.L11:
	movl	-84(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	thrd_join@PLT
	addl	$1, -84(%rbp)
.L10:
	cmpl	$4, -84(%rbp)
	jle	.L11
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
