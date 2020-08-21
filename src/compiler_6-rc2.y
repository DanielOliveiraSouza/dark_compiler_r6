		//  UNIVERSIDADE FEDERAL DE MATO GROSSO]
		/** CAMPUS UNIVERSITÁRIO DO ARAGUAIA
		* CURSO CIENCIA DA COMPUTAÇÃO
		* DOCENTE:
		 */
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <wordexp.h>
#include "compiler_6_rc2_types.h"
// declaração da tabela de simbolos
type_symbol_table  *symbl = NULL;
char str_code [FULL_STR];
char str_data [FULL_STR];
char str_fmt  [FULL_STR];
int flag_label_main=0;
int label_while = 0;
int label_if = 0;
int flag_scanf_int=0;
int flag_scanf_str=0;
int flag_printf_int=0;
int flag_printf_str=0;
//declaracao da string de código 

void yyerror(char *);
int yylex(void);
char buffer[FULL_STR];
extern FILE * yyin ;






%}
%union{
	int inteiro;
	char string[2048];
}

%token  NUMERAL
%token  <string> ID       
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
%token <string>OPERATR     
%token DIFERENTE       
%token INIESCOPO       
%token FIMESCOPO        
%token INIEXPR       
%token FIMEXPR     
%token STRING       
%token <string> TIPOSTRING  
%token  INT
%token  NUMEROREAL
%token SUBTRACAO
%token ADICAO
%token MULTIPLICACAO
%token DIVISAO
%token NAO
%token ERROLEXICO       
%token DELIMITADOR
%type <inteiro> NUMERAL 
//%type <real> NUMEROREAL
//%type <inteiro> termo fator
//%type <string> declaracao
%type <inteiro> comando_atribuicao fator expressao_numerica
 %type <string> comando_escrita comando_leia 
%start programa
%right '+' '-'
%right '*' '/'

%%
//  
/*dclaracoes  declaracao declaracoes | ɛ
declaracao  declaracao_inteiro | declaracao_real  | declaracao_string
declaracao_inteiro  inteiro  id; 
declaracao_real  real  id  ; 
declaracao_string  string   id;  */


declaracoes:
	declaracoes declaracao  {  Create_declaration_variable_asm();}
	|			{  ; } //após declarar todas as variáveis declarar section .text
	
;

declaracao:
				//Insert_symbol_table(&symbl, "str",1,"kernel",0);
	INT ID 	DELIMITADOR		{ Insert_symbol_table(&symbl,$2,0,"",0);}
	
	| TIPOSTRING ID	 DELIMITADOR	{ Insert_symbol_table(&symbl,$2,1,"",0);}
	

;
programa:
	declaracoes bloco  {}
;

bloco:
INIESCOPO comandos FIMESCOPO { }

;

comando:
		
		comando_atribuicao
	|	comando_escrita 
	|	comando_leia
	;
comandos:
/*comando_se | comando_se_senao | comando_enquanto  | comando_atribuicao | comando_leitura | */ 
	comando comandos 
	|
;

comando_leia:
	LEIA ID DELIMITADOR {
			flag_label_main = Generate_section_text(flag_label_main);
			Read_variable($2);
		}
;
				
comando_escrita:
	ESCREVA ID DELIMITADOR {  
			flag_label_main = Generate_section_text(flag_label_main);
			Write_variable($2);
	}
;


/*
	expressao_numerica  expressao_numerica + expressao_numerica  | expressao_numerica  - expressao_numerica 
	| termo  | termo * fator | termo / fator 

termo  num | id

fator  num | id | ( expressao_numerica )
*/

comando_atribuicao:
	ID OPERATR  expressao_numerica DELIMITADOR { 	 
						flag_label_main = Generate_section_text(flag_label_main);
						strcat(str_code,"\tPOP RBX\n");
						Set_variable($1); 
						 // toda a gramatica que chamar expressão numerica,devemos fazer um pop RBX
					}

;
termo:
	NUMERAL {	flag_label_main = Generate_section_text(flag_label_main);
			Expression("",0,$1); }
	| ID 	{ 	
			flag_label_main = Generate_section_text(flag_label_main);
			Expression($1,1,0);
		}
;

fator:
	//termo expressao_numerica {flag_label_main = Generate_section_text(flag_label_main); }
	NUMERAL {	flag_label_main = Generate_section_text(flag_label_main);
			Expression("",0,$1); }
	| ID 	{ 	
			flag_label_main = Generate_section_text(flag_label_main);
			Expression($1,1,0);
		}
	
;

expressao_numerica:
	|  termo MULTIPLICACAO fator 				{ 	//puts("Fazendo Termo * fator");
									flag_label_main = Generate_section_text(flag_label_main); 
									Expression("",2,0); 
								}
	
	| termo DIVISAO fator    				{	//puts("Fazendo TERMO / FATOR"); 
									flag_label_main = Generate_section_text(flag_label_main);
									Expression ("",3,0); 
								}
	
	| expressao_numerica ADICAO expressao_numerica 		{	//puts("Fazendo E + E");
									flag_label_main = Generate_section_text(flag_label_main);
									Expression("",4,0);
								}
	| expressao_numerica SUBTRACAO expressao_numerica 	{ 	//puts("Fazendo E -E");
									flag_label_main = Generate_section_text(flag_label_main);
									Expression("",5,0);
								}
	| termo 						{ 	//puts("Derivei um termo");
									flag_label_main = Generate_section_text(flag_label_main);
								} 
	
;
%%
//Gera código assembly para expressões aritméticas
void Expression (char * label_id, int type_term, int value ){
	if (type_term == 0 ){
		snprintf(buffer,sizeof(buffer),"\tMOV RBX, %d\n",value);
		strcat(str_code,buffer);
		strcat(str_code,"\tPUSH RBX\n");
	}else{
		if ( type_term == 1) {
			type_symbol_table * var_dec = Search_symbol_table(symbl, label_id);
			if (var_dec != NULL ){
				snprintf(buffer,sizeof(buffer),"\tMOV RBX, [%s]\n",label_id);
				strcat(str_code,buffer);
				strcat(str_code,"\tPUSH RBX\n");
			}
		}
		//multiplicacao
		if (type_term == 2 ) {
			strcat(str_code,"\tPOP RCX\n");
			strcat(str_code,"\tPOP RBX\n");
			strcat(str_code,"\tIMUL RBX,RCX\n");
			strcat(str_code, "\tPUSH RBX\n");
		} //divisão
		if (type_term == 3 ){
			strcat(str_code,"\tPOP RCX\n");
			strcat(str_code,"\tPOP RBX\n");
			strcat(str_code,"\tDIV RBX,RCX\n");
			strcat(str_code, "\tPUSH RBX\n");
		}
		 //soma
		if (type_term == 4 ){
			strcat(str_code,"\tPOP RCX\n");
			strcat(str_code,"\tPOP RBX\n");
			strcat(str_code,"\tADD RBX,RCX\n");
			strcat(str_code, "\tPUSH RBX\n");
	
		}
		// subtração
		if (type_term == 5 ){
			strcat(str_code,"\tPOP RCX\n");
			strcat(str_code,"\tPOP RBX\n");
			strcat(str_code,"\tSUB RBX,RCX\n");
			strcat(str_code, "\tPUSH RBX\n");
		}
	}
}
void yyerror(char *s) { 
    printf( "%s\n", s); 
} 
		//  Função de criação de um nó da tabela de simbolos s
//


		
type_symbol_table * new_Symbl_table_t(char * label_id,  int type, char * value_str, int value_int){
	type_symbol_table * new_node;
	new_node = NULL;
	 new_node = (type_symbol_table * ) malloc (sizeof (type_symbol_table));
	 if (new_node != NULL ){
		new_node->type= type;
		new_node->next_node = NULL;
		strcpy(new_node->label_id,label_id);
		switch ( type ){
			case 0:    ///  testa o tipo  
				new_node->value_int = value_int;
				new_node->value_str[0] = '\0';  ///  se a variavel é do tipo inteiro o valor char dela é vazio 
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
	// Função que insere na tabela de simbolos  
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
///  Função que busca por um identificador retornando o ponteiro para o nó ou nulo  
type_symbol_table *  Search_symbol_table(type_symbol_table * symbl, char * label_id){
	if (symbl != NULL ){
		type_symbol_table * node = symbl;
		int flag_found = 0;
		while(node != NULL && (strcmp(node->label_id,label_id) != 0)){
			//printf("id=%s\n",node->label_id);
			node = node->next_node;
		}
		//printf("id=%s\n",node->label_id);
		if (node!= NULL && strcmp(node->label_id,label_id) == 0){
			//printf("label_id:%s\n",node->label_id);
			return node;
		}
		else {
			printf("Erro semântico: A variavel '%s' está sendo usada, porem não foi declarada\n",label_id);
			exit(1);
			return NULL;
		}
		
	}else{
		printf("Tabela vazia");
		return NULL;
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

void Create_declaration_variable_asm(){
	if (symbl != NULL ){
		type_symbol_table * var_dec;
		var_dec = symbl;
		//int sn_ret=1048576;
		
		//strcat(str_code",\tmain:\n");
		while ( var_dec->next_node != NULL )
			var_dec = var_dec->next_node;
			switch(var_dec->type){
				
				case 0:
					//snprintf server para converter um número em string 
					//snprintf(buffer,sizeof(buffer),"fmt_int_printf_%s:\tdb \"%%d\",10,0\n",var_dec->label_id);
					//strcat(str_code,buffer);
					//snprintf(buffer,sizeof(buffer),"fmt_int_%s:\tdb \"%%d\",0\n",var_dec->label_id);
					//strcat(str_code,buffer); //gera string de formato para  printf 
					snprintf(buffer,sizeof(buffer),"%s:\tdd %d\n",var_dec->label_id,var_dec->value_int);
					strcat(str_data,buffer);// concatena o codigo assembly gerado para cada declaração de variavel na string de código
					//printf("sn_ret=%d",sn_ret);
					//printf("%s",buffer); 
					break;
				case 1:
					
					//snprintf(buffer,sizeof(buffer),"fmt_string_printf_%s:\tdb \"%%s\",10,0\n",var_dec->label_id);
					//strcat(str_code,buffer);
					//snprintf(buffer,sizeof(buffer),"fmt_string_%s:\tdb \"%%s\",0\n",var_dec->label_id);
					//strcat(str_code,buffer);
					snprintf(buffer,sizeof(buffer),"%s:\n\tdb \"%s\",0\n",var_dec->label_id,var_dec->value_str);
					strcat(str_data,buffer);
					//printf("sn_ret=%d",sn_ret);
					//printf("%s",buffer);
					break;
			}
			// após declarar todas as variáveis , não se esquecer de declara section.text 
		
	}
}
void Set_variable(char * label_id ){
	type_symbol_table * var_dec;
	var_dec = Search_symbol_table(symbl,label_id);
	if (var_dec   != NULL ) {
		switch(var_dec->type){
				case 0:
					//snprintf server para converter um número em string 
					snprintf(buffer,sizeof(buffer),"\tMOV[%s], RBX\n",  label_id);
					strcat(str_code,buffer);
					printf("%s",buffer);
					break;
// 				case 1:
// 					snprintf(buffer,sizeof(buffer),"\tMOV RAX ,%s\n\tMOV [%s] RAX\n",value_str,label_id);
// 					strcat(str_code,buffer);
// 					printf("%s",buffer);
// 					break;
		}
	}else{
		printf("A variavel %s está sendo usada, porém não foi declarada\n",label_id);
		exit(1);
	}
}

void Read_variable(char * label_id){
	type_symbol_table * var;
	var = Search_symbol_table(symbl,label_id);
	if (var != NULL ) {
	
		switch(var->type){
			case 0:
				strcat(str_code,"\tPUSH RBP\n");
				strcat(str_code,"\tMOV RAX, 0\n");
				Generate_string_format(2);
				//snprintf(buffer,sizeof(buffer),"\tMOV rdi,fmt3:%s\n",label_id);
				strcat(str_code,"\tLEA RDI, [rel fmt3]\n");
				snprintf(buffer,sizeof(buffer),"\tMOV rsi, %s\n",label_id);
				strcat(str_code,buffer);
				strcat(str_code,"\tcall scanf\n");
				strcat(str_code,"\tPOP RBP\n");
				//strcat(str_code,"format: db \"%d\",0\n");
				break;
			case 1:
				strcat(str_code,"\tPUSH RBP\n");
				Generate_string_format(3);
				strcat(str_code,"\tMOV RAX, 0\n");
				//snprintf(buffer,sizeof(buffer),"\tMOV rdi,fmt_string_%s\n",label_id);
				strcat(str_code,"\tLEA RDI, [rel fmt4]\n");
				snprintf(buffer,sizeof(buffer),"\tMOV rsi, %s\n",label_id);
				strcat(str_code,buffer);
				strcat(str_code,"\tcall scanf\n");
				strcat(str_code,"\tPOP RBP\n");
				break;
		}
	}
}
		

void Write_variable(char * label_id ){
	type_symbol_table * var_dec = NULL ;
	var_dec = Search_symbol_table(symbl,label_id);
	if (var_dec != NULL ) {
		switch(var_dec->type){
			case 0:
				//strcat(str_code,"\tPUSH rbp\n");
				strcat(str_code,"\tMOV RAX, 0\n");
				Generate_string_format(0);
				//snprintf(buffer,sizeof(buffer),"\tMOV rdi, fmt_int_printf_%s\n",label_id);
				strcat(str_code,"\tLEA RDI, [rel fmt1]\n");
				snprintf(buffer,sizeof(buffer),"\tMOV rsi, [%s]\n",label_id);
				strcat(str_code,buffer);
				strcat(str_code,"\tcall printf\n");
				//strcat(str_code,"\tpop rbp\n");
			break;
			case 1:
				//strcat(str_code,"PUSH rbp\n");
				//strcat(str_code,"MOV rdi,fmt_char\n");
				strcat(str_code,"\tMOV RAX, 0\n");
				Generate_string_format(1);
				//snprintf(buffer,sizeof(buffer),"\tMOV rdi, fmt_string_printf_%s\n",label_id);
				strcat(str_code,"\tLEA RDI, [rel fmt2]\n");
				snprintf(buffer,sizeof(buffer),"\tMOV rsi, %s\n",label_id);
				strcat(str_code,buffer);
				strcat(str_code,"\tcall printf\n");
				//strcat(str_code,"pop rbp\n");
			break;
		}
	}
}
//esta função gera o cabeçalho .text 
int Generate_section_text(int flag){
	if (flag == 0 ){
		strcat(str_code,"\n\nsection .text\n");
		strcat(str_code,"main:\n");
		return 1;
	}else
		return 1;
}
	
//Gera strings de formato para leitura e impressão		
void Generate_string_format(int type_flag){
	switch(type_flag){
		case 0: //teste string de formato para printf("%d\n");
			if (flag_printf_int == 0){ //verifica se foi criado a string de formato para printf("%d\n");
				strcat(str_fmt,"fmt1: db \"%d\",10,0\n");
				flag_printf_int = 1;
			}
		break;
		case 1:
			if (flag_printf_str == 0){ //testa se o flag de string de formato(printf("%s\n") existe 
				strcat(str_fmt,"fmt2: db \"%s\",10,0\n");
				flag_printf_str = 1;
			}
		break;
		
		case 2:
			if (flag_scanf_int == 0){ // verifica se o flag de string de formato scanf("%d") exi
					strcat(str_fmt,"fmt3: db \"%d\",0\n");
					flag_scanf_int = 1;
			}
		break;
		
		case 3:
			if (flag_scanf_str == 0){
				strcat(str_fmt,"fmt4: db \"%s\",0\n");
				flag_scanf_str = 1;
			}
		break;
	}
}
		

void  CreateProcess(char *  input){
	int status;
	status = 0;
	pid_t pid;
	wordexp_t str;
	char ** command;
	wordexp(input,&str,0);
	command = str.we_wordv;
	//for (int i =0 ; i < str.we_wordc;i++)
	//	printf("%s\n",str.we_wordv[i]);
	pid = fork ();
	if ( pid < 0 ){
		printf("não foi possivel criar o processo %s\n",command[0]);
		exit(1);
	}
		
	if ( pid == 0 )
		execvp(command[0],command)	;
	else
		waitpid(pid,&status,0);
		
	wordfree(&str);
	

}
void GenCommandStr(char * filename, char *nasm_cmd, char *gcc_cmd){
	if ( ( gcc_cmd == NULL )|| ( nasm_cmd == NULL ) ) {
		printf("gcc_cmd or nasm_cmd can't be NULL");
		exit(1);
	}
	char file_output[FULL_STR];
	
	
	strcpy(file_output,filename);
	strcat(file_output,".o");
	strcpy(nasm_cmd,"");
	strcat(nasm_cmd,"nasm ");
	strcat(nasm_cmd,"-felf64 ");
	strcat(nasm_cmd,filename);
	strcat(nasm_cmd," -o " );
	strcat(nasm_cmd,file_output);
	
	
	strcpy(gcc_cmd,"");
	strcat(gcc_cmd,"gcc ");
	strcat(gcc_cmd,file_output);
	strcat(gcc_cmd," -o " );
	strcpy(file_output,filename);
	strcat(file_output,".exe");
	strcat(gcc_cmd,file_output);
	strcat(gcc_cmd,"  -no-pie");
	
	printf("nasm_cmd=%s\ngcc_cmd=%s\n",nasm_cmd,gcc_cmd);
}

int main(int argc, char ** argv) {
	//yyin = fopen(argv[1],"r");
	//while (yytext != EOF ){
		//yylex();
	FILE *fp;
	fp = NULL;
	yyin = fopen(argv[1],"r");
	char gcc_cmd[FULL_STR];
	char nasm_cmd[FULL_STR];
	if (yyin != NULL ){

		strcpy(str_code,""); // inicialiando  o buffer de codigo
		strcpy(str_data,"");
		strcpy(str_fmt,"");
		strcpy(str_fmt,";\t\tASSEMBLY X86_64 GERADO POR COMPILER_6_RC2 VER 0.0\n");
		strcat(str_fmt,"\tglobal main\n");
		strcat(str_fmt,"\textern printf\n");
		strcat(str_fmt,"\textern scanf\n\n");
		strcat(str_fmt,"section .data\n");
		//strcat(str_code,"\tMOV RAX,00\n");
		//strcat(str_code,"\t;Região de váriaves estáticas\n");
		yyparse();
		strcat(str_code,"\tMOV rax,0;\t\tReseta o registrador RAX\n");
		strcat(str_code,"\tret ;\t\tDevolve o controle para o sistema operacional\n");
		printf("Arquivo de saída:\n%s%s%s\n",str_fmt,str_data,str_code);
		//strcat(str_data,str_code);
		fp = fopen(argv[2],"w");
		if (fp != NULL ){
		printf("escrevendo  %s\n",argv[2]);
			fprintf(fp,"%s",str_fmt);
			fprintf(fp,"%s",str_data);
			fprintf(fp,"%s",str_code);
			fclose(fp);
			fp = NULL;
		}
		fclose(yyin);
		yyin= NULL;
		GenCommandStr(argv[2],nasm_cmd,gcc_cmd);
		CreateProcess(nasm_cmd);
		CreateProcess(gcc_cmd);
		
	}else
		printf("ERRO FATAL:O arquivo '%s', não foi encontrado ou não pode ser aberto\n",argv[1]);
    return 0; 
}
