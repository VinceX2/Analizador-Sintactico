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
#line 1 "sintactico.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "string.h"

    extern int yylex(void); 
    extern int yyparse();
    extern char *yytext;
    extern FILE *yyin;
    void yyerror(char *s);
    void mserror(char* token, char* st);
    void msstate();

#line 81 "sintactico.tab.c" /* yacc.c:339  */

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
   by #include "sintactico.tab.h".  */
#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
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
    TIPODATO = 258,
    INSTANCIA = 259,
    MODIFICADOR = 260,
    SELECCION = 261,
    SWITCH = 262,
    PARAMETRO = 263,
    EXCEPCION = 264,
    TERMINAR = 265,
    CONTINUAR = 266,
    DETENER = 267,
    RESTRICCION = 268,
    ESTRUCTURA = 269,
    ELIMINAR = 270,
    ESCRIBIR = 271,
    EXTENSION = 272,
    SIGUIENTE = 273,
    INFERENCIA = 274,
    ENUMERADOR = 275,
    COMPILADOR = 276,
    PROPIEDAD = 277,
    INICIACION = 278,
    INTERFACE = 279,
    MODULO = 280,
    DICCIONARIO = 281,
    NULO = 282,
    REFERENCIA = 283,
    ELSE = 284,
    ELIF = 285,
    CONDICIONAL = 286,
    ALCANCE = 287,
    DECLARACION = 288,
    IMPORTACION = 289,
    FUNCION = 290,
    ARRAY = 291,
    RANGE = 292,
    IN = 293,
    NUMERO = 294,
    ID = 295,
    CLASS = 296,
    IF = 297,
    KINGDOM = 298,
    RETURN = 299,
    TRY = 300,
    OOPS = 301,
    CICLO_FOR = 302,
    CICLO_DO = 303,
    CICLO_WHILE = 304,
    CICLO_FOREACH = 305,
    CICLO_REDO = 306,
    CICLO_UNTIL = 307,
    CICLO_RETRY = 308,
    ASIGNACION = 309,
    OPARIT_ADD = 310,
    OPARIT_SUB = 311,
    OPARIT_MUL = 312,
    OPARIT_DIV = 313,
    OPARIT_REM = 314,
    OPARIT_EXP = 315,
    OPARIT_INC = 316,
    OPARIT_DEC = 317,
    AGRUP_LPAREN = 318,
    AGRUP_RPAREN = 319,
    AGRUP_LBRACK = 320,
    AGRUP_RBRACK = 321,
    AGRUP_LBRACE = 322,
    AGRUP_RBRACE = 323,
    OPLOG_OR = 324,
    OPLOG_AND = 325,
    OPLOG_NOT = 326,
    COMA = 327,
    PUNTO = 328,
    OPREL_LT = 329,
    OPREL_GT = 330,
    OPREL_LE = 331,
    OPREL_GE = 332,
    OPREL_EQ = 333,
    OPREL_NE = 334,
    PRINT = 335,
    COMILLA = 336,
    OPEN = 337,
    BRAKE = 338,
    SHOW = 339,
    SET = 340,
    CONVERT = 341,
    CLOSE = 342,
    PI = 343,
    MATH = 344,
    SQRT = 345,
    CONSTRUCT = 346,
    DOSPUNTOS = 347,
    GET = 348,
    THROWS = 349
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "sintactico.y" /* yacc.c:355  */

    

#line 220 "sintactico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "sintactico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   121,   121,   121,   121,   125,   125,   130,
     131,   132,   133,   136,   136,   138,   138,   142,   142,   144,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   147,
     147,   147,   147,   147,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   150,   150,   150,   155,   157,   162,   165,
     168,   171,   178,   181,   184,   192,   194,   196,   198,   205,
     208,   211,   217,   219,   219,   224,   228,   234,   236,   238,
     238,   240,   240,   242,   244,   246,   246,   250,   251,   252,
     253,   254,   255,   258,   258,   258,   261,   261,   261,   261,
     262,   262,   262,   262,   265,   265,   265,   265,   265,   265,
     269,   274,   278,   282,   285,   289,   290,   290,   293,   297,
     300,   303,   306,   309,   312,   315,   318,   321,   326,   330,
     333,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPODATO", "INSTANCIA", "MODIFICADOR",
  "SELECCION", "SWITCH", "PARAMETRO", "EXCEPCION", "TERMINAR", "CONTINUAR",
  "DETENER", "RESTRICCION", "ESTRUCTURA", "ELIMINAR", "ESCRIBIR",
  "EXTENSION", "SIGUIENTE", "INFERENCIA", "ENUMERADOR", "COMPILADOR",
  "PROPIEDAD", "INICIACION", "INTERFACE", "MODULO", "DICCIONARIO", "NULO",
  "REFERENCIA", "ELSE", "ELIF", "CONDICIONAL", "ALCANCE", "DECLARACION",
  "IMPORTACION", "FUNCION", "ARRAY", "RANGE", "IN", "NUMERO", "ID",
  "CLASS", "IF", "KINGDOM", "RETURN", "TRY", "OOPS", "CICLO_FOR",
  "CICLO_DO", "CICLO_WHILE", "CICLO_FOREACH", "CICLO_REDO", "CICLO_UNTIL",
  "CICLO_RETRY", "ASIGNACION", "OPARIT_ADD", "OPARIT_SUB", "OPARIT_MUL",
  "OPARIT_DIV", "OPARIT_REM", "OPARIT_EXP", "OPARIT_INC", "OPARIT_DEC",
  "AGRUP_LPAREN", "AGRUP_RPAREN", "AGRUP_LBRACK", "AGRUP_RBRACK",
  "AGRUP_LBRACE", "AGRUP_RBRACE", "OPLOG_OR", "OPLOG_AND", "OPLOG_NOT",
  "COMA", "PUNTO", "OPREL_LT", "OPREL_GT", "OPREL_LE", "OPREL_GE",
  "OPREL_EQ", "OPREL_NE", "PRINT", "COMILLA", "OPEN", "BRAKE", "SHOW",
  "SET", "CONVERT", "CLOSE", "PI", "MATH", "SQRT", "CONSTRUCT",
  "DOSPUNTOS", "GET", "THROWS", "$accept", "namespace", "program",
  "declarations", "declaration_var", "names", "variable", "statements",
  "statement", "assigment", "tail", "if_statement", "elif",
  "optional_else", "for_statement", "array_statement", "parameter_array",
  "while_statement", "do_statement", "function_statement", "return_type",
  "functions_params", "parameters", "parameter", "function_tail",
  "return_optional", "expression", "logic_operator", "arit_operator",
  "relat_operator", "print_statement", "inc_statement", "dec_statement",
  "foreach_statement", "class", "constructor", "props", "open", "this",
  "return", "brake", "object", "call_Function", "propiedades", "throw",
  "msgbox", "tryCatch", "close", "intString", "aritmetic", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,    -4,    42,   -21,  -113,   260,  -113,  -113,   -23,   -11,
    -113,   -10,   -24,    -5,    -3,   -24,   -20,   -14,  -113,     9,
      13,    23,    26,   -39,    27,    28,   121,  -113,     8,   -16,
     189,  -113,  -113,  -113,  -113,  -113,     1,  -113,  -113,    30,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,     1,
       1,     1,  -113,     1,   382,  -113,    29,    31,    -7,   357,
      33,    34,    35,    32,   -24,    39,   -24,    72,    61,     1,
    -113,  -113,   246,  -113,     1,   106,    47,   -24,  -113,  -113,
     -16,  -113,    58,  -113,     1,  -113,    49,  -113,   -44,    36,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,     1,  -113,  -113,  -113,  -113,  -113,  -113,     1,     1,
       1,   317,   317,     1,  -113,    76,    43,    45,    46,    51,
      54,  -113,    55,    83,   -36,    85,    62,  -113,  -113,     1,
    -113,  -113,    65,    60,  -113,  -113,    63,     1,  -113,  -113,
    -113,  -113,  -113,    66,    69,    74,    96,   -15,   100,    59,
      71,    75,    77,  -113,  -113,   110,    79,  -113,    88,    80,
       1,   144,  -113,    90,    91,    84,   101,    22,    92,  -113,
     104,  -113,     1,   165,   -53,   131,    87,  -113,   138,  -113,
    -113,   128,   112,   126,     1,   260,   260,   317,  -113,   111,
    -113,  -113,  -113,  -113,  -113,    89,   137,   116,   -24,    92,
     119,   114,    11,   117,   317,   148,   130,   -24,   127,  -113,
     122,  -113,  -113,     0,  -113,   129,   140,   132,  -113,   134,
     133,   154,    24,   -24,   173,  -113,   147,   176,   317,   150,
     169,     4,   260,   260,   155,  -113,  -113,  -113,   178,   153,
    -113,   317,   317,   157,    12,   158,   -24,   159,   317,   162,
       5,  -113,  -113,  -113,   196,  -113,   168,   167,  -113,  -113,
    -113,    25,  -113,   172,   260,   260,  -113,   174,    20,  -113,
    -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    45,    68,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    12,    13,
       0,    18,    19,    22,    20,    28,     0,    24,    23,     0,
      25,    26,    27,    29,    30,    38,    31,    32,    33,    34,
      35,    36,    37,    39,    40,    41,    42,    43,    44,     0,
       0,     0,    16,     0,    80,   110,     0,     0,     0,    13,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     7,     0,    10,     0,    11,     0,     0,   101,   102,
       0,    17,     0,    21,    70,   109,     0,    63,     0,     0,
      86,    93,    91,    88,    92,    89,    90,    87,    85,    83,
      84,     0,    98,    96,    97,    95,    94,    99,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,    14,     9,     0,
      46,    73,     0,    69,    72,   113,     0,     0,    82,    81,
      79,    78,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   105,     0,     0,   115,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,   100,
       0,   116,     0,     0,     0,     0,     0,   112,     0,    71,
      62,     0,     0,     0,     0,     0,     0,     0,    65,     0,
     108,   119,   121,   120,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,    49,    48,    58,    47,     0,     0,     0,    67,     0,
       0,     0,     0,     0,    58,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,   104,   114,    76,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    55,    57,     0,    75,     0,     0,    60,    59,
      61,     0,    74,     0,     0,     0,   117,     0,     0,    53,
      52,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -112,   223,   -25,  -113,   -12,   213,   -28,   205,
      37,  -113,  -113,    16,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,    73,  -113,  -113,    -8,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    25,    26,    27,    28,    29,    30,    31,    32,
     198,    33,   234,   235,    34,    35,    98,    36,    37,    38,
      39,   142,   143,   144,   228,   257,    65,   118,   119,   120,
      40,    41,    42,    43,    44,    45,   134,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    81,    91,    69,    64,   251,   269,    70,    72,   153,
     154,    83,   222,   262,     1,    10,    62,    86,    90,    10,
      71,   280,   146,   195,    92,   242,   274,   177,   147,   232,
     164,   123,    10,    62,   178,   202,   165,   203,    87,     3,
      10,    62,     4,    81,     5,    88,    89,    95,    96,    97,
      59,    99,    60,    78,    91,    61,   124,    63,    66,    73,
      67,    63,    64,   233,    64,   179,   130,   136,   132,   141,
      90,   252,   137,   270,    74,    64,    75,   223,   263,   140,
      84,    85,   124,   211,   212,   213,   281,   196,    76,   243,
     275,    77,    79,    94,    80,   129,   121,   126,   122,   149,
     127,   128,   225,   131,   133,   135,   150,   151,   152,   138,
     139,   155,    87,   145,   156,   160,   157,   148,   158,   159,
     161,   162,     6,   163,     7,   166,   248,   168,   167,   169,
     253,   254,   170,   176,   173,   172,   171,   174,   175,   259,
     260,   180,   185,   181,   182,   141,   267,   190,   183,     8,
     184,   186,   187,   188,   191,   192,     9,   193,   124,   197,
      10,    11,   277,   278,   194,    12,    13,   199,   201,    14,
     200,   204,   205,   206,   207,   208,   209,   216,   214,   217,
     221,   215,   210,   220,    15,   224,    16,    -4,   226,    -4,
       6,   230,     7,   227,   237,   231,    64,   236,   239,   238,
     218,   241,   232,    17,    18,    64,   240,    19,    20,   229,
      21,   246,    22,   249,    23,    24,   247,     8,   250,   255,
     258,    64,   256,   261,     9,   244,   271,   266,    10,    11,
     268,   264,   272,    12,    13,   273,   276,    14,    68,    82,
     279,    93,     0,   189,    64,     0,   219,     6,   265,     7,
     245,     0,    15,     0,    16,    -5,     0,    -5,     0,     0,
       0,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,    17,    18,     0,     8,    19,    20,     0,    21,     0,
      22,     9,    23,    24,     0,    10,    11,     0,     8,     0,
      12,    13,     0,     0,    14,     9,     0,     0,     0,    10,
      11,     0,     0,     0,    12,    13,     0,     0,    14,    15,
       0,    16,    -3,     0,    -3,     0,     0,     0,     6,     0,
       7,     0,     0,    15,     0,    16,    -6,     0,    17,    18,
       0,     0,    19,    20,     0,    21,     0,    22,     0,    23,
      24,     0,    17,    18,     0,     8,    19,    20,     0,    21,
       0,    22,     9,    23,    24,     0,    10,    11,     0,     0,
       0,    12,    13,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,    16,     0,     0,    -6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,     0,     0,    19,    20,     0,    21,     0,    22,     0,
      23,    24,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   125,     0,     0,     0,     0,   108,   109,   110,   111,
       0,   112,   113,   114,   115,   116,   117,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,   108,   109,   110,   111,     0,   112,   113,   114,   115,
     116,   117
};

static const yytype_int16 yycheck[] =
{
      12,    26,    30,    15,    16,     1,     1,    15,    16,   121,
     122,     3,     1,     1,    32,    39,    40,    33,    30,    39,
      40,     1,    66,     1,    36,     1,     1,    42,    72,    29,
      66,    38,    39,    40,    49,    88,    72,    90,    54,    43,
      39,    40,     0,    68,    65,    61,    62,    59,    60,    61,
      73,    63,    63,    92,    82,    65,    68,    81,    63,    73,
      63,    81,    74,    63,    76,    80,    74,    79,    76,    94,
      82,    67,    84,    68,    65,    87,    63,    66,    66,    87,
      72,    73,    94,   195,   196,   197,    66,    65,    65,    65,
      65,    65,    65,    63,    66,    63,    67,    64,    67,   111,
      66,    66,   214,    64,    32,    44,   118,   119,   120,     3,
      63,   123,    54,    64,    38,    64,    73,    81,    73,    73,
      66,    66,     1,    40,     3,    40,   238,   139,    66,    64,
     242,   243,    72,    37,    68,   147,    73,    68,    64,   251,
     252,    41,    32,    84,    73,   170,   258,     3,    73,    28,
      73,    72,    64,    73,    64,    64,    35,    73,   170,    67,
      39,    40,   274,   275,    63,    44,    45,    63,     3,    48,
     182,    40,    85,    35,    46,    63,    50,    40,    67,    63,
      66,    92,   194,    64,    63,    68,    65,    66,    40,    68,
       1,    64,     3,    63,    54,    73,   208,    68,    64,    67,
     208,    47,    29,    82,    83,   217,    73,    86,    87,   217,
      89,    64,    91,    63,    93,    94,    40,    28,    49,    64,
      67,   233,    44,    66,    35,   233,    30,    68,    39,    40,
      68,    73,    64,    44,    45,    68,    64,    48,    15,    26,
      66,    36,    -1,   170,   256,    -1,   209,     1,   256,     3,
     234,    -1,    63,    -1,    65,    66,    -1,    68,    -1,    -1,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    -1,    28,    86,    87,    -1,    89,    -1,
      91,    35,    93,    94,    -1,    39,    40,    -1,    28,    -1,
      44,    45,    -1,    -1,    48,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    48,    63,
      -1,    65,    66,    -1,    68,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,    63,    -1,    65,    66,    -1,    82,    83,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,
      94,    -1,    82,    83,    -1,    28,    86,    87,    -1,    89,
      -1,    91,    35,    93,    94,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,
      93,    94,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    96,    43,     0,    65,     1,     3,    28,    35,
      39,    40,    44,    45,    48,    63,    65,    82,    83,    86,
      87,    89,    91,    93,    94,    97,    98,    99,   100,   101,
     102,   103,   104,   106,   109,   110,   112,   113,   114,   115,
     125,   126,   127,   128,   129,   130,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    73,
      63,    65,    40,    81,   101,   121,    63,    63,    98,   101,
     121,    40,   121,    73,    65,    63,    65,    65,    92,    65,
      66,    99,   102,     3,    72,    73,    33,    54,    61,    62,
     101,   103,   101,   104,    63,   101,   101,   101,   111,   101,
      55,    56,    57,    58,    59,    60,    61,    62,    69,    70,
      71,    72,    74,    75,    76,    77,    78,    79,   122,   123,
     124,    67,    67,    38,   101,    64,    64,    66,    66,    63,
     121,    64,   121,    32,   131,    44,   101,   101,     3,    63,
     121,    99,   116,   117,   118,    64,    66,    72,    81,   101,
     101,   101,   101,    97,    97,   101,    38,    73,    73,    73,
      64,    66,    66,    40,    66,    72,    40,    66,   101,    64,
      72,    73,   101,    68,    68,    64,    37,    42,    49,    80,
      41,    84,    73,    73,    73,    32,    72,    64,    73,   118,
       3,    64,    64,    73,    63,     1,    65,    67,   105,    63,
     101,     3,    88,    90,    40,    85,    35,    46,    63,    50,
     101,    97,    97,    97,    67,    92,    40,    63,   121,   105,
      64,    66,     1,    66,    68,    97,    40,    63,   119,   121,
      64,    73,    29,    63,   107,   108,    68,    54,    67,    64,
      73,    47,     1,    65,   121,   108,    64,    40,    97,    63,
      49,     1,    67,    97,    97,    64,    44,   120,    67,    97,
      97,    66,     1,    66,    73,   121,    68,    97,    68,     1,
      68,    30,    64,    68,     1,    65,    64,    97,    97,    66,
       1,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   110,   111,   111,   112,   113,   114,   115,   116,
     116,   117,   117,   118,   119,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   124,   124,   124,   124,
     125,   126,   127,   128,   129,   130,   131,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   144
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     1,     1,     0,     2,     1,     3,
       2,     2,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     8,     8,
      10,     9,     8,     8,     8,     4,     4,     4,     0,    13,
      13,    13,     6,     1,     3,     6,    11,     8,     1,     1,
       0,     3,     1,     1,     6,     2,     0,     3,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     2,     8,    10,     4,     2,     4,     6,     3,
       2,     1,     5,     4,    10,     4,     5,    15,     3,     6,
       6,     6
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
        case 10:
#line 131 "sintactico.y" /* yacc.c:1646  */
    {printf("\nError Sintactico, falta Tipo de dato\n");}
#line 1565 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "sintactico.y" /* yacc.c:1646  */
    {printf("\nError Sintactico, falta Tipo de dato\n");}
#line 1571 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 133 "sintactico.y" /* yacc.c:1646  */
    {printf("\nError Sintactico, falta declaracion\n");}
#line 1577 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 150 "sintactico.y" /* yacc.c:1646  */
    {msstate();}
#line 1583 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "sintactico.y" /* yacc.c:1646  */
    {mserror("]","IF");}
#line 1589 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "sintactico.y" /* yacc.c:1646  */
    {mserror("[","IF");}
#line 1595 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 179 "sintactico.y" /* yacc.c:1646  */
    {mserror("]","ELIF");}
#line 1601 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 182 "sintactico.y" /* yacc.c:1646  */
    {mserror("[","ELIF");}
#line 1607 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 192 "sintactico.y" /* yacc.c:1646  */
    {mserror("]","ELSE");}
#line 1613 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 194 "sintactico.y" /* yacc.c:1646  */
    {mserror("[","ELSE");}
#line 1619 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 206 "sintactico.y" /* yacc.c:1646  */
    {mserror("}","FOR");}
#line 1625 "sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 209 "sintactico.y" /* yacc.c:1646  */
    {mserror("{","FOR");}
#line 1631 "sintactico.tab.c" /* yacc.c:1646  */
    break;


#line 1635 "sintactico.tab.c" /* yacc.c:1646  */
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
#line 342 "sintactico.y" /* yacc.c:1906  */

void yyerror(char* s){
    printf("\n%s",s);
    
}

void mserror(char* token,char* st) {
    printf(" %s se espera token %s\n",st,token);
}

void msstate() {
    printf(" Instruccion no valida \n");
}

int main(int argc, char **argv){

    if (argc>1){
        yyin=fopen(argv[1],"rt");
    }
    else{
        yyin=fopen("text2.txt","rt");
        
    }
    
    yyparse();
    
    return 0;
	
}



/* error {msstate();} */


