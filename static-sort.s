	.file	"static-sort.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC1:
	.string	" "
	.section	.rodata
	.align 32
.LC0:
	.long	6
	.long	5
	.long	4
	.long	7
	.long	3
	.long	5
	.long	1
	.long	2
	.section	.text.unlikely,"ax",@progbits
.LCOLDB2:
	.section	.text.startup,"ax",@progbits
.LHOTB2:
	.globl	main
	.type	main, @function
main:
.LFB1474:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	$.LC0, %esi
	movl	$8, %ecx
	xorl	%ebx, %ebx
	subq	$48, %rsp
	.cfi_def_cfa_offset 64
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	leaq	8(%rsp), %rdi
	rep movsl
	movl	$7, 36(%rsp)
	movl	$6, 32(%rsp)
	movl	$5, 28(%rsp)
	movl	$5, 24(%rsp)
	movl	$4, 20(%rsp)
	movl	$1, 8(%rsp)
	movl	$2, 12(%rsp)
	movl	$3, 16(%rsp)
.L2:
	movl	8(%rsp,%rbx), %esi
	movl	$_ZSt4cout, %edi
	addq	$4, %rbx
	call	_ZNSolsEi
	movl	$.LC1, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	cmpq	$32, %rbx
	jne	.L2
	xorl	%eax, %eax
	movq	40(%rsp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	addq	$48, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1474:
	.size	main, .-main
	.section	.text.unlikely
.LCOLDE2:
	.section	.text.startup
.LHOTE2:
	.section	.text.unlikely
.LCOLDB3:
	.section	.text.startup
.LHOTB3:
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1710:
	.cfi_startproc
	pushq	%rax
	.cfi_def_cfa_offset 16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	popq	%rcx
	.cfi_def_cfa_offset 8
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	jmp	__cxa_atexit
	.cfi_endproc
.LFE1710:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.text.unlikely
.LCOLDE3:
	.section	.text.startup
.LHOTE3:
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
