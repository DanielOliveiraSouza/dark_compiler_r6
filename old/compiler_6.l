%{
	
	#define NUMERAL 255
	#define ID 256
	#define SE 257
	#define SENAO 258
	#define ENTAO 259
	#define ENQUANTO 260
	#define FACA 261
	#define LEIA 262
	#define ESCREVA 263
	#define OPEREL 264
	#define MENOR  265
	#define MAIOR 266
	#define MAIORIGUAL 267
	#define MENORIGUAL 268
	#define IGUAL 269
	#define OPERATM 270
	#define DIFERENTE 271
	#define INIESCOPO 272
	#define FIMESCOPO  273
	#define INIEXPR 274
	#define FIMEXPR 275
	#define STRING 276
	#define TIPODADO 277
	#define NUMEROREAL 278
	#define OPERATR 279
	#define ERROLEXICO 280
	#define DELIMITADOR 281
	#define VIRGULA 282
	
%}
		/* definições lexicas*/
brancoespaco [\n \t]
letra [a-zA-Z]
digito [0-9]
aspas  [\"]
permitidos [ a-zA-Z0-9!@#$%*()&+-\._-ÄäÁáÁàâãÉéèêêẽËëÊÍÌíĩÓÒóòôõÕÙÚúùüÇç^=\,\;/]
naopermitidos [A-Da-dF-Zf-z]
%%
		/*expressões regulares ou regras */
brancoespaco					{  }
{aspas}{permitidos}*{aspas}	                { printf("string %s\n",yytext); return STRING;}
{digito}+					{ printf("numero inteiro %s\n", yytext); return NUMERAL;}
{digito}+(\.({digito}+))(E[+\-]?{digito}+)?	{ printf("numero  real:%s\n",yytext);  return NUMEROREAL;}
"inteiro"					{ printf("tipo de dado %s\n",yytext);  return TIPODADO ; }
"real"						{ printf("tipo de dado %s\n", yytext); return TIPODADO ; }
"string"					{ printf("tipo de dado %s\n", yytext); return TIPODADO; }
"se"						{ printf("palavra reservada se\n"); return SE;}
"senao"						{ printf("palavara reservada senao\n");return SENAO;}
"entao"						{ printf("palavra reservada  entao\n");return ENTAO;}
"enquanto"					{ printf("palavra reservada enquanto\n");return ENQUANTO;}
"faca"						{ printf("palavra reservada faça\n");return FACA ;}
"leia"						{ printf("palavra reservada leia\n");return LEIA;}
"escreva"					{ printf("palavra reservada escreva\n");return ESCREVA;}
{letra}({letra}|{digito})* 			{ printf("ident %s\n",yytext); return ID;} 
"="						{ printf("operador %s",yytext); return OPERATR;}
">"						{ printf("operador relacional %s\n",yytext); return OPEREL; }
"<"						{ printf("operador relacional %s\n",yytext); return OPEREL; }
">="						{ printf("operador relacional %s\n",yytext); return OPEREL; }
"<="						{ printf("operador relacional %s\n",yytext); return OPEREL; }
"=="						{ printf("operador relacional %s\n",yytext); return OPEREL; }
"!="						{ printf("operador relacional %s\n",yytext); return OPEREL; }
"("						{ printf("%s\n",yytext); return INIEXPR; }
")"						{ printf("%s\n",yytext); return FIMEXPR; }
"{"						{ printf("%s\n",yytext); return INIESCOPO;}
"}"						{ printf("%s\n",yytext); return FIMESCOPO;}						
{digito}+{naopermitidos}				{ printf("erro lexico : esperava um número  %s\n",yytext); exit(ERROLEXICO); }
			/*.						{ printf("erro lexico  %s\n",yytext); exit(ERROLEXICO); }*/

%%
int yywrap(void){
	return 1;
}

int main(int argc, char *argv[]){
	yyin = fopen(argv[1],"r");
	while (yytext != EOF )
		yylex();
		

	return 0;
}	
