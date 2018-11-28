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
    CONTRARIO = 284,
    CONTRARIOIF = 285,
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
    OPREL_NE = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "sintactico.y" /* yacc.c:1909  */

    

#line 138 "sintactico.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */
