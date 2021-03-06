%{
	
	#include "y.tab.h"
	#include "compiler_6_rc2_types.h"
	extern YYSTYPE yylval;
	
%}
		/* definições lexicas*/
brancoespaco [\n \t]
letra [a-zA-Z]
digito [0-9]
aspas  [\"]
permitidos [ a-zA-Z0-9!@#$%*()&+-\._-ÄäÁáÁàâãÉéèêêẽËëÊÍÌíĩÓÒóòôõÕÙÚúùüÇç^=\,\;/ ]
naopermitidos [A-Da-dF-Zf-z]
%%
						/*expressões regulares ou regras */
brancoespaco					{  }
{aspas}{permitidos}*{aspas}	                { printf("string :%s\n",yytext); strcpy(yylval.string,yytext);return STRING;}
{digito}+					{ printf("numero inteiro :%s\n", yytext); yylval.inteiro=atoi(yytext); return NUMERAL;}
			
"inteiro"					{ printf("tipo de dado: %s\n",yytext);  return INT ; }

"string"					{ printf("tipo de dado: %s\n", yytext); return TIPOSTRING; }
"se"						{ printf("palavra reservada: se\n"); return SE;}
"senao"						{ printf("palavara reservada: senao\n");return SENAO;}
"entao"						{ printf("palavra reservada:  entao\n");return ENTAO;}
"enquanto"					{ printf("palavra reservada: enquanto\n");return ENQUANTO;}
"faca"						{ printf("palavra reservada: faça\n");return FACA ;}
"leia"						{ printf("palavra reservada: leia\n");return LEIA;}
"escreva"					{ printf("palavra reservada: escreva\n");return ESCREVA;}
{letra}({letra}|{digito})* 			{ printf("ident %s\n",yytext); strcpy(yylval.string,yytext); return ID;}
"+"						{ printf("operador: %s\n",yytext); return ADICAO ;}
"-"						{ printf("operador: %s\n",yytext); return SUBTRACAO;}
"*"						{ printf("operador: %s\n",yytext); return MULTIPLICACAO;}
"/"						{ printf("operador: %s\n",yytext); return DIVISAO; }
"="						{ printf("operador: =\n"); strcpy(yylval.string,yytext); return OPERATR;}
">"						{ printf("operador: relacional: %s\n",yytext); return MAIOR ;}
"<"						{ printf("operador: relacional: %s\n",yytext); return MENOR; }
">="						{ printf("operador: relacional: %s\n",yytext); return MAIORIGUAL; }
"<="						{ printf("operador: relacional: %s\n",yytext); return MENORIGUAL; }
"=="						{ printf("operador: relacional: %s\n",yytext); return IGUAL; }
"!="						{ printf("operador: relacional: %s\n",yytext); return DIFERENTE; }
"("						{ printf("INIEXPR:%s\n",yytext); return INIEXPR; }
")"						{ printf("FIMEXPR:%s\n",yytext); return FIMEXPR; }
"{"						{ printf("INIESCOPO:%s\n",yytext); return INIESCOPO;}
"}"						{ printf("FIMESCOPO:%s\n",yytext); return FIMESCOPO;}
";"						{ printf("DELIMITADOR:%s\n",yytext); return DELIMITADOR;}
{digito}+{naopermitidos}			{ printf("erro lexico : esperava um número  %s\n",yytext); exit(ERROLEXICO); }
			/*.						{ printf("erro lexico  %s\n",yytext); exit(ERROLEXICO); }*/

%%
int yywrap(void){
	return 1;
}
/*
int main(int argc, char *argv[]){
	yyin = fopen(argv[1],"r");
	while (yytext != EOF )
		yylex();
		

	return 0;
}
*/
