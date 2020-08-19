/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "src/compiler_6-rc2.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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







#line 97 "src/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
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
#line 36 "src/compiler_6-rc2.y" /* yacc.c:355  */

	int inteiro;
	char string[2048];

#line 177 "src/y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 194 "src/y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   33

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  25
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  43

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    37,    35,     2,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,   100,   102,   107,   111,   117,   118,
     119,   123,   124,   128,   135,   152,   161,   163,   171,   173,
     180,   181,   186,   191,   195,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERAL", "ID", "SE", "SENAO", "ENTAO",
  "ENQUANTO", "FACA", "LEIA", "ESCREVA", "OPEREL", "MENOR", "MAIOR",
  "MAIORIGUAL", "MENORIGUAL", "IGUAL", "OPERATR", "DIFERENTE", "INIESCOPO",
  "FIMESCOPO", "INIEXPR", "FIMEXPR", "STRING", "TIPOSTRING", "INT",
  "NUMEROREAL", "SUBTRACAO", "ADICAO", "MULTIPLICACAO", "DIVISAO", "NAO",
  "ERROLEXICO", "DELIMITADOR", "'+'", "'-'", "'*'", "'/'", "$accept",
  "declaracoes", "declaracao", "programa", "bloco", "comando", "comandos",
  "comando_leia", "comando_escrita", "comando_atribuicao", "termo",
  "fator", "expressao_numerica", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    43,    45,    42,    47
};
# endif

#define YYPACT_NINF -25

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-25)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -25,   -17,    17,    -4,    16,    18,   -25,   -25,   -25,     3,
      19,    20,    -4,     4,   -25,   -25,   -25,    -8,    -7,    -2,
      -6,    -5,   -25,   -25,   -25,   -25,   -25,   -25,   -19,   -24,
     -25,   -25,    10,    10,    -2,    -2,   -25,   -25,   -25,   -25,
     -25,   -13,   -13
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    12,     0,     0,     2,     6,     1,     0,
       0,     0,    12,     0,    10,     9,     8,     0,     0,    20,
       0,     0,    11,     7,     5,     4,    16,    17,    25,     0,
      13,    14,     0,     0,    20,    20,    15,    18,    19,    21,
      22,    24,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -25,   -25,   -25,    21,   -25,   -25,   -25,
     -25,    -3,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     2,     7,    12,    13,    14,    15,    16,
      28,    39,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       9,    26,    27,     3,    34,    35,    10,    11,     4,     5,
      36,    32,    33,    37,    38,    34,    35,     8,    41,    42,
      17,    19,    18,    20,    21,    23,    24,    25,    30,    31,
      40,     0,     0,    22
};

static const yytype_int8 yycheck[] =
{
       4,     3,     4,    20,    28,    29,    10,    11,    25,    26,
      34,    30,    31,     3,     4,    28,    29,     0,    34,    35,
       4,    18,     4,     4,     4,    21,    34,    34,    34,    34,
      33,    -1,    -1,    12
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    42,    20,    25,    26,    41,    43,     0,     4,
      10,    11,    44,    45,    46,    47,    48,     4,     4,    18,
       4,     4,    45,    21,    34,    34,     3,     4,    49,    51,
      34,    34,    30,    31,    28,    29,    34,     3,     4,    50,
      50,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    43,    44,    44,
      44,    45,    45,    46,    47,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     3,     2,     3,     1,     1,
       1,     2,     0,     3,     3,     4,     1,     1,     1,     1,
       0,     3,     3,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 93 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {  Create_declaration_variable_asm();}
#line 1298 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {  ; }
#line 1304 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { Insert_symbol_table(&symbl,(yyvsp[-1].string),0,"",0);}
#line 1310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { Insert_symbol_table(&symbl,(yyvsp[-1].string),1,"",0);}
#line 1316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 107 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {}
#line 1322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { }
#line 1328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 128 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {
			flag_label_main = Generate_section_text(flag_label_main);
			Read_variable((yyvsp[-1].string));
		}
#line 1337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 135 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {  
			flag_label_main = Generate_section_text(flag_label_main);
			Write_variable((yyvsp[-1].string));
	}
#line 1346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 152 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	 
						flag_label_main = Generate_section_text(flag_label_main);
						strcat(str_code,"\tPOP RBX\n");
						Set_variable((yyvsp[-3].string)); 
						 // toda a gramatica que chamar expressão numerica,devemos fazer um pop RBX
					}
#line 1357 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 161 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {	flag_label_main = Generate_section_text(flag_label_main);
			Expression("",0,(yyvsp[0].inteiro)); }
#line 1364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 163 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	
			flag_label_main = Generate_section_text(flag_label_main);
			Expression((yyvsp[0].string),1,0);
		}
#line 1373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 171 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {	flag_label_main = Generate_section_text(flag_label_main);
			Expression("",0,(yyvsp[0].inteiro)); }
#line 1380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 173 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	
			flag_label_main = Generate_section_text(flag_label_main);
			Expression((yyvsp[0].string),1,0);
		}
#line 1389 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 181 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	//puts("Fazendo Termo * fator");
									flag_label_main = Generate_section_text(flag_label_main); 
									Expression("",2,0); 
								}
#line 1398 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 186 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {	//puts("Fazendo TERMO / FATOR"); 
									flag_label_main = Generate_section_text(flag_label_main);
									Expression ("",3,0); 
								}
#line 1407 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 191 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    {	//puts("Fazendo E + E");
									flag_label_main = Generate_section_text(flag_label_main);
									Expression("",4,0);
								}
#line 1416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	//puts("Fazendo E -E");
									flag_label_main = Generate_section_text(flag_label_main);
									Expression("",5,0);
								}
#line 1425 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "src/compiler_6-rc2.y" /* yacc.c:1646  */
    { 	//puts("Derivei um termo");
									flag_label_main = Generate_section_text(flag_label_main);
								}
#line 1433 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 1437 "src/y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 204 "src/compiler_6-rc2.y" /* yacc.c:1906  */

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
		
		
		
		
			
int main(int argc, char ** argv) {
	//yyin = fopen(argv[1],"r");
	//while (yytext != EOF ){
		//yylex();
		
	FILE *fp;
	fp = NULL;
	yyin = fopen(argv[1],"r");
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
	}else
		printf("ERRO FATAL:O arquivo '%s', não foi encontrado ou não pode ser aberto\n",argv[1]);
    return 0; 
}
