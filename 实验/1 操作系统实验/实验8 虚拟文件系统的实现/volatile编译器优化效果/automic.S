	.file	"automic.c"
	.text
	.globl	atomic_count
	.bss
	.align 4
	.type	atomic_count, @object
	.size	atomic_count, 4
atomic_count:
	.zero	4
	.globl	count
	.align 4
	.type	count, @object
	.size	count, 4
count:
	.zero	4
	.text
	.globl	runner
	.type	runner, @function
runner:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -12(%rbp)
	jmp	.L2
.L3:
	movl	count(%rip), %eax
	addl	$1, %eax
	movl	%eax, count(%rip)
	movl	$1, -20(%rbp)
	movl	-20(%rbp), %eax
	lock xaddl	%eax, atomic_count(%rip)
	movl	%eax, -16(%rbp)
	addl	$1, -12(%rbp)
.L2:
	cmpl	$999, -12(%rbp)
	jle	.L3
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	runner, .-runner
	.section	.rodata
.LC0:
	.string	"The atomic counter is %u\n"
.LC1:
	.string	"The non-atomic counter is %u\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	pthread_attr_init@PLT
	movl	$0, -120(%rbp)
	jmp	.L7
.L8:
	leaq	-112(%rbp), %rax
	movl	-120(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	leaq	(%rax,%rdx), %rdi
	leaq	-64(%rbp), %rax
	movl	$0, %ecx
	leaq	runner(%rip), %rdx
	movq	%rax, %rsi
	call	pthread_create@PLT
	addl	$1, -120(%rbp)
.L7:
	cmpl	$7, -120(%rbp)
	jle	.L8
	movl	$0, -116(%rbp)
	jmp	.L9
.L10:
	movl	-116(%rbp), %eax
	cltq
	movq	-112(%rbp,%rax,8), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	pthread_join@PLT
	addl	$1, -116(%rbp)
.L9:
	cmpl	$7, -116(%rbp)
	jle	.L10
	movl	atomic_count(%rip), %eax
	movl	%eax, -124(%rbp)
	movl	-124(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	count(%rip), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L12
	call	__stack_chk_fail@PLT
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
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
