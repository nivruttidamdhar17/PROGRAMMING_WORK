#include <stdio.h>

int main() {
    int a = -13;
    int b = 4;
    
    // Scenario A: Integer Truncation
    int div_result = a / b;  
    
    // Scenario B: Modulo Sign behavior
    int mod_result = a % b; 
    
    return 0;
}

//  The below assembly code states that CPU calculated / and % in a single instruction (idiv)! The compiler is smart enough to just grab the quotient and the remainder.

/*

main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$-13, -16(%rbp)
	movl	$4, -12(%rbp)
	movl	-16(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%edx, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
*/