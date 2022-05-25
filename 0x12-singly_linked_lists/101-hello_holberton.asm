section .data
	string1 db 0xa, " Hello Holberton\n", 0xa, 0xa, 0

section .text
	global _start

	_start:
		;
		mov	rdi, string1	;
		xor	rcx, rcx	;
		not	rcx		;
		xor 	al, al		;
		cld			;
		repnz	scasb		;
		not	rcx		;
		dec	rcx		;
		mov	rdx, rcx	;
		;
		mov	rsi, string1	;
		mov	rax, 1		;
		mov	rdi, rax	;
		syscall			;
