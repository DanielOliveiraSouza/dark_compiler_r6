#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "compiler_6_rc2_types.h"
	/*#define FULL_STR 2048
	#define FULL_ID 64

struct symbol_table{
			char label_id[FULL_ID];
			int type;
			char value_str[FULL_STR];
			int value_int;
			struct symbol_table * next_node;

};
typedef struct symbol_table type_symbol_table;
	
	
	type_symbol_table * new_Symbl_table_t(char * label_id,  int type, char * value_str, int value_int);
	void Insert_symbol_table(type_symbol_table ** symbl, char * label_id,  int type, char * value_str, int value_int);
	int  Search_symbol_table(type_symbol_table * symbl, char * label_id);
	void Print_symbol_table (type_symbol_table * symbl);*/
type_symbol_table * symbl;
type_code str_code;


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

type_symbol_table *  Search_symbol_table(type_symbol_table * symbl, char * label_id){
	if (symbl != NULL ){
		type_symbol_table * node = symbl;
		int flag_found = 0;
		while(node != NULL && (strcmp(node->label_id,label_id) != 0)){
			//printf("id=%s\n",node->label_id);
			node = node->next_node;
		}
		//printf("id=%s\n",node->label_id);
		return node;
	}else{
		printf("Tabela vazia");
		return NULL;
	}
			
			
}

int main (int argc, char ** argv ){
	//type_symbol_table * symbl;
	symbl = NULL;
	type_symbol_table *aux;
	aux = NULL;
	strcpy(str_code.global_code,"");
	//type_symbol_table ** symbl, char * label_id,  int type, char * value_str, int value_int);
	Insert_symbol_table(&symbl, "count",0,"",0);
	Insert_symbol_table(&symbl, "str",1,"kernel",0);
	Insert_symbol_table(&symbl,"helena",1,"em familia",0);
	Insert_symbol_table(&symbl,"code",1,"mycompiler",0);
	Insert_symbol_table(&symbl,"main",0,"funcion",0);
	Insert_symbol_table(&symbl,"script",1,"sh",0);
	 aux = Search_symbol_table(symbl,"main");
	 if (aux != NULL)
		puts("achei");
	 else
		 puts("Sou nulo");
	 
	 printf("");
// 	if ( Search_symbol_table(symbl,"count") )
// 		puts("encontrado");
// 	else
// 		puts("não existe na tabela de simbolos");
	Print_symbol_table(symbl);
	Create_declaration_variable_asm();
	return 0;
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
void Create_declaration_variable_asm(){
	if (symbl != NULL ){
		type_symbol_table * var_dec;
		var_dec = symbl;
		char buffer[FULL_ID];
		// create asm 
		strcat(str_code.global_code,"\tglobal main\n");
		strcat(str_code.global_code,"\textern printf\n");
		strcat(str_code.global_code,"\textern scanf\n\n");
		strcat(str_code.global_code,"\tsection .data\n");
		//strcat(str_code.global_code",\tmain:\n");
		while ( var_dec->next_node != NULL )
			var_dec = var_dec->next_node;
			switch(var_dec->type){
				case 0:
					//snprintf server para converter um número em string 
					snprintf(buffer,sizeof(buffer),"%s: db %d\n",var_dec->label_id,var_dec->value_int);
					strcat(str_code.global_code,buffer); // concatena o codigo assembly gerado para cada declaração de variavel na string de código
					printf("%s",buffer); 
					break;
				case 1:
					snprintf(buffer,sizeof(buffer),"%s: db \"%s\",0\n",var_dec->label_id,var_dec->value_str);
					strcat(str_code.global_code,buffer);
					printf("%s",buffer);
					break;
			}
			
		
	}
}

void Expression ( char * label_id, int type_expression ){
	if ( type_expression == 0 ){
		type_symbol_table * var_dec;
		var_dec=Search_symbol_table(symbl,label_id);
		if (var_dec != NULL ){
			strcat(str_code.global_code=