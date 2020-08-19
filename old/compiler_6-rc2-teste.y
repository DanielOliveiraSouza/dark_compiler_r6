		/* UNIVERSIDADE FEDERAL DE MATO GROSSO]
		* CAMPUS UNIVERSITÁRIO DO ARAGUAIA
		* CURSO CIENCIA DA COMPUTAÇÃO
		* DOCENTE:
		*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compiler_6_rc2_types.h"
type_symbol_table  *symbl = NULL;
type_code str_code;
void yyerror(char *);
int yylex(void);
extern yytext;
extern yyin;

%}
%union{
	int inteiro;
	char string[2048];
}

%token  NUMERAL
%token <string> ID       
%token SE       
%token SENAO       
%token ENTAO       
%token ENQUANTO       
%token FACA       
%token LEIA       
%token ESCREVA       
%token OPEREL       
%token MENOR        
%token MAIOR       
%token MAIORIGUAL       
%token MENORIGUAL       
%token IGUAL       
%token OPERATM       
%token DIFERENTE       
%token INIESCOPO       
%token FIMESCOPO        
%token INIEXPR       
%token FIMEXPR     
%token STRING       
%token <string> TIPOSTRING  
%token  INT
%token  NUMEROREAL       
%token OPERATR       
%token ERROLEXICO       
%token DELIMITADOR
%type <inteiro> NUMERAL 
%type <real> NUMEROREAL
//%type <inteiro> termo fator
%type <string> declaracao



%%
/* 
declaracoes  declaracao declaracoes | ɛ
declaracao  declaracao_inteiro | declaracao_real  | declaracao_string
declaracao_inteiro  inteiro  id; 
declaracao_real  real  id  ; 
declaracao_string  string   id; */

declaracao:
				//Insert_symbol_table(&symbl, "str",1,"kernel",0);
	INT ID 			{ Insert_symbol_table(&symbl,$2,0,"",0);	Print_symbol_table(symbl);}
	
/*	|TIPOSTRING ID	{ 
				Insert_symbol_table(&symbl,$2,1,"",0);  printf("%d",Search_symbol_table(symbl,$2)); }
	|            { printf("Regra inválida");}*/
;

/*recursao_expressao_numerica:
	| '+'  recursao_expressao_numerica { }
	| '-' recursao_expressao_numerica { }
	|  termo
	|
;


termo:
	NUMERAL 	{ printf("MOV RAX, %d",yyval.inteiro);
			  printf("PUSH 
			}

;
fator:
	NUMERAL		{ printf("MOV RAX %d",yyval.inteiro); }
	
	| ID  INIEXPR Expressao_numerica FIMEXPR    {$$.inteiro = $1.inteiro } /*  É O MESMO QUE DIZER ID (Expressao_numerica) */
	;
/*Expressao_numerica:
	termo recursao_expressao_numerica { }
	termo '*' fator recursao_expressao_numerica		{ }
	termo '/' fator recursao_expressao_numerica		{ }
	


;*/

	
%%

void yyerror(char *s) { 
    printf( "%s\n", s); 
} 
		/* Função de criação de um nó da tabela de simbolos*/
type_symbol_table * new_Symbl_table_t(char * label_id,  int type, char * value_str, int value_int){
	type_symbol_table * new_node;
	new_node = NULL;
	 new_node = (type_symbol_table * ) malloc (sizeof (type_symbol_table));
	 if (new_node != NULL ){
		new_node->type= type;
		new_node->next_node = NULL;
		strcpy(new_node->label_id,label_id);
		switch ( type ){
			case 0:    /* testa o tipo */
				new_node->value_int = value_int;
				new_node->value_str[0] = '\0';  /* se a variavel é do tipo inteiro o valor char dela é vazio*/
			break;
			case 1:
				strcpy(new_node->value_str, value_str);
			break;
		}
		return new_node;
	}else{
		printf("Falha ao criar a tabela de simbolos");
		exit(1);
	}
}
	/* Função que insere na tabela de simbolos */
void Insert_symbol_table(type_symbol_table ** symbl, char * label_id,  int type, char * value_str, int value_int){
	if ( (*symbl) == NULL ){
		(*symbl) = new_Symbl_table_t(label_id,type,value_str,value_int);
	}else{
		type_symbol_table * previosly;
		type_symbol_table * next;
		type_symbol_table  * new_node;
		new_node =  new_Symbl_table_t(label_id,type,value_str,value_int);
		
		next = (*symbl);
		
		while(next != NULL ){
			previosly = next;
			next = next->next_node ;
		}
		previosly->next_node = new_node;
	}
}
/* Função que busca por um identificador retornando verdadeiro se  existe na tabela de simbolos ou falso*/
int  Search_symbol_table(type_symbol_table * symbl, char * label_id){
	if (symbl != NULL ){
		type_symbol_table * node = symbl;
		int flag_found = 0;
		while(node != NULL && flag_found == 0){
			if ( !(strcmp(node->label_id,label_id) ) ){
				flag_found = 1;
	
			}
			node = node->next_node;
		}
		return flag_found;
	}else{
		printf("Tabela vazia");
		return 0;
	}
			
			
}
void Print_symbol_table (type_symbol_table * symbl){
	if ( symbl != NULL){
		type_symbol_table * aux = symbl;
		while(aux != NULL ){
			printf("%s ",aux->label_id);
			switch(aux->type){
				case 0:
					printf("%d", aux->value_int);
					break;
				case 1:
					printf("%s",aux->value_str);
					break;
			}
			puts("");
			aux = aux->next_node;
		}
	}
}
/*
int main(int argc, char ** argv) {
	//yyin = fopen(argv[1],"r");
	//while (yytext != EOF ){
		yylex();
		yyparse(); 
	//}
    return 0; 
}
*/