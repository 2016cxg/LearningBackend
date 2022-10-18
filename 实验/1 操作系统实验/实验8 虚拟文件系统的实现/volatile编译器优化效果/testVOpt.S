	.file	"testV.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"In child pthread: a=%d\n"
	.text
	.p2align 4
	.globl	child_pth_fun
	.type	child_pth_fun, @function
child_pth_fun:
.LFB52:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$4, %edx
	movl	$1, %edi
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rsi
	movl	$4, a(%rip)
	call	__printf_chk@PLT
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE52:
	.size	child_pth_fun, .-child_pth_fun
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"In main pthread: a=%d, b=%d, c=%d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB51:
	.cfi_startproc
	endbr64
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	leaq	child_pth_fun(%rip), %rdx
	xorl	%ecx, %ecx
	xorl	%esi, %esi
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	leaq	16(%rsp), %rdi
	movl	$10000000, 12(%rsp)
	call	pthread_create@PLT
	movl	a(%rip), %edx
	.p2align 4,,10
	.p2align 3
.L5:
	movl	12(%rsp), %eax
	leal	-1(%rax), %ecx
	movl	%ecx, 12(%rsp)
	testl	%eax, %eax
	jne	.L5
	movl	%edx, %r8d
	movl	%edx, %ecx
	movl	$1, %edi
	leaq	.LC1(%rip), %rsi
	call	__printf_chk@PLT
	movq	16(%rsp), %rdi
	xorl	%esi, %esi
	call	pthread_join@PLT
	movq	24(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L9
	xorl	%eax, %eax
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L9:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE51:
	.size	main, .-main
	.globl	a
	.data
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	1
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
