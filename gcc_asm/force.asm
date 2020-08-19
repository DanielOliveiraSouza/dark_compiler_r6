;		ASSEMBLY X86_64 GERADO POR COMPILER_6_RC2 VER 0.0
	global main
	extern printf
	extern scanf

section .data
fmt1: db "%d",10,0
fmt4: db "%s",0
fmt2: db "%s",10,0
x:	dd 0
y:	dd 0
z:
	db "",0


section .text
main:
	MOV RBX, 4
	PUSH RBX
	MOV RBX, 2
	PUSH RBX
	MOV RBX, 3
	PUSH RBX
	POP RCX
	POP RBX
	IMUL RBX,RCX
	PUSH RBX
	POP RCX
	POP RBX
	ADD RBX,RCX
	PUSH RBX
	POP RBX
	MOV[x], RBX
	MOV RBX, 2
	PUSH RBX
	MOV RBX, 3
	PUSH RBX
	POP RCX
	POP RBX
	IMUL RBX,RCX
	PUSH RBX
	MOV RBX, 4
	PUSH RBX
	POP RCX
	POP RBX
	ADD RBX,RCX
	PUSH RBX
	POP RBX
	MOV[y], RBX
	MOV RAX, 0
	MOV RDI,fmt1
	MOV rsi, [x]
	call printf
	MOV RAX, 0
	MOV RDI,fmt1
	MOV rsi, [y]
	call printf
	MOV RAX, 0
	MOV RDI,fmt4
	MOV rsi, z
	call scanf
	MOV RAX, 0
	MOV RDI,fmt2
	MOV rsi, z
	call printf
	MOV rax,0;		Reseta o registrador RAX
	ret ;		Devolve o controle para o sistema operacional
