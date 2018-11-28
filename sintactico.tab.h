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
    WS = 259,
    CLASS = 260,
    ASIGNACION = 261,
    IF = 262,
    CONTRARIO = 263,
    CONTRARIOIF = 264,
    OPARIT_ADD = 265,
    OPARIT_SUB = 266,
    OPARIT_MUL = 267,
    OPARIT_DIV = 268,
    OPARIT_REM = 269,
    OPARIT_EXP = 270,
    OPARIT_INC = 271,
    OPARIT_DEC = 272,
    NUMERO = 273,
    CICLO = 274,
    KINGDOM = 275,
    RETURN = 276,
    DECLARACION = 277,
    IMPORTACION = 278,
    FUNCION = 279,
    AGRUP_LPAREN = 280,
    AGRUP_RPAREN = 281,
    AGRUP_LBRACK = 282,
    AGRUP_RBRACK = 283,
    AGRUP_LBRACE = 284,
    AGRUP_RBRACE = 285,
    OPLOG_OR = 286,
    OPLOG_AND = 287,
    OPLOG_NOT = 288,
    ID = 289,
    PUNTO = 290,
    OPREL_LT = 291,
    OPREL_GT = 292,
    OPREL_LE = 293,
    OPREL_GE = 294,
    OPREL_EQ = 295,
    OPREL_NE = 296,
    COMA = 297,
    REFERENCIA = 298,
    RANGE = 299,
    FOR = 300,
    SWITCH = 301,
    ARRAY = 302,
    ALCANCE = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "sintactico.y" /* yacc.c:1909  */

    float real;
    int numero;
    char* texto;

#line 109 "sintactico.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */
