/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMERAL = 258,
    ID = 259,
    SE = 260,
    SENAO = 261,
    ENTAO = 262,
    ENQUANTO = 263,
    FACA = 264,
    LEIA = 265,
    ESCREVA = 266,
    OPEREL = 267,
    MENOR = 268,
    MAIOR = 269,
    MAIORIGUAL = 270,
    MENORIGUAL = 271,
    IGUAL = 272,
    OPERATR = 273,
    DIFERENTE = 274,
    INIESCOPO = 275,
    FIMESCOPO = 276,
    INIEXPR = 277,
    FIMEXPR = 278,
    STRING = 279,
    TIPOSTRING = 280,
    INT = 281,
    NUMEROREAL = 282,
    SUBTRACAO = 283,
    ADICAO = 284,
    MULTIPLICACAO = 285,
    DIVISAO = 286,
    NAO = 287,
    ERROLEXICO = 288,
    DELIMITADOR = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "compiler_6-rc2.y" /* yacc.c:1909  */

	int inteiro;
	char string[2048];

#line 94 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
