;		ASSEMBLY X86_64 GERADO POR COMPILER_6_RC2 VER 0.0
	global main
	extern printf
	extern scanf

section .data
fmt3: db "%d",0
fmt4: db "%s",0
fmt1: db "%d",10,0
fmt2: db "%s",10,0
valor:	dd 0
id:	dd 0
str:
	db "",0


section .text
main:
	 PUSH RBP
	MOV RAX, 0
	LEA RDI, [rel fmt3]
	MOV rsi, valor
	call scanf
	POP RBP
	 PUSH RBP
	MOV RAX, 0
	LEA RDI, [rel fmt3]
	MOV rsi, id
	call scanf
	POP RBP
	MOV RAX, 0
	LEA RDI, [rel fmt4]
	MOV rsi, str
	call scanf
	PUSH rbp
	MOV RAX, 0
	LEA RDI, [rel fmt1]
	MOV rsi, [valor]
	call printf
	pop rbp
	PUSH rbp
	MOV RAX, 0
	LEA RDI, [rel fmt1]
	MOV rsi, [id]
	call printf
	pop rbp
PUSH rbp
	MOV RAX, 0
	LEA RDI, [rel fmt2]
	MOV rsi, str
	call printf
pop rbp
	MOV rax,0;		Reseta o registrador RAX
	ret ;		Devolve o controle para o sistema operacional
