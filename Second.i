	.file	"prg.c"
	.text
	.globl	mystrndup
	.type	mystrndup, @function
mystrndup:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	subl	$12, %esp
	pushl	%eax
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	subl	$4, %esp
	pushl	%eax
	pushl	8(%ebp)
	pushl	-12(%ebp)
	call	memcpy
	addl	$16, %esp
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	mystrndup, .-mystrndup
	.section	.rodata
.LC0:
	.string	"\n Duplicate string is %s \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$16, %esp
	movl	%ecx, %ebx
	movl	$1, -12(%ebp)
	jmp	.L4
.L5:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	4(%ebx), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	subl	$12, %esp
	pushl	%eax
	call	strlen
	addl	$16, %esp
	movl	%eax, %ecx
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	4(%ebx), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%ecx
	pushl	%eax
	call	mystrndup
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	subl	$8, %esp
	pushl	-16(%ebp)
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	addl	$1, -12(%ebp)
.L4:
	movl	-12(%ebp), %eax
	cmpl	(%ebx), %eax
	jle	.L5
	subl	$12, %esp
	pushl	-16(%ebp)
	call	free
	addl	$16, %esp
	movl	$0, %eax
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
