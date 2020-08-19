;		ASSEMBLY X86_64 GERADO POR COMPILER_6_RC2 VER 0.0
	global main
	extern printf
	extern scanf

section .data
fmt1: db "%d",10,0
fmt2: db "%s",10,0
valor:	dd 0
id:	dd 0
str:
	db "",0


section .text
main:
	PUSH rbp
	MOV RAX, 0
	MOV RDI,fmt1
	MOV rsi, [valor]
	call printf
	pop rbp
	PUSH rbp
	MOV RAX, 0
	MOV RDI,fmt1
	MOV rsi, [id]
	call printf
	pop rbp
PUSH rbp
	MOV RAX, 0
	MOV RDI,fmt2
	MOV rsi, str
	call printf
pop rbp
	MOV rax,0;		Reseta o registrador RAX
	ret ;		Devolve o controle para o sistema operacional
