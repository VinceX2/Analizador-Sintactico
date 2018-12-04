%option noyywrap
%{
    /* Declaraciones C*/
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "sintactico.tab.h"

    char symbol_table[30][20];
    int i = 0;
    char example1[30][20];
    int result;
    
%}

/* Definiciones regulares*/
delim [\t\n]+
ws {delim}+
letra [a-zA-Z]
digito [0-9]

id {letra}({letra}|{digito}|_)*
numero {digito}+(\.{digito}+)?(E[+\-]?(digito)+)?
tipoDato (int|double|byte|char|short|long|boolfloat|string)
alcance (king|knight|farmer)

referencia (is|with|this)
contrario (else)
range (range)

contrarioif (elif)
declaracion (new|castle)
importacion (tricks|using)
funcion (def|inline|print)

arreglo (array)
condicional (when|unless|then)
in (in)
nulo (none|pass)

metodo (stone|open|input)
instancia (void|from)
modificador (poison|virtual|register|auto|soul)
seleccion (select)
switch (switch)

parametro (map)
excepcion (raise|throws|ensure|rescue)
terminar (finally)
continuar (continue)
detener (stop)

restriccion (restrict)
estructura (struct)
eliminar (delete)
escribir (write)

extension (extends)
siguiente (next)
inferencia (var)
enumerador (enum)

compilador (native)
propiedad (signed)
iniciacion (begin)
interface (tower)
modulo (sword)
diccionario (del)


/* Reglas */
%%

class {printf("%s",yytext);return CLASS;}

if {printf("%s",yytext);return IF;}

kingdom {printf("%s",yytext); return KINGDOM;}

yield|return {printf("%s",yytext);return RETURN;}

brake {printf("%s",yytext);return BRAKE;}

try {printf("%s",yytext);return TRY;}

oops {printf("%s",yytext);return OOPS;}

for {printf("%s",yytext);return CICLO_FOR;}

do {printf("%s",yytext);return CICLO_DO;}

while {printf("%s",yytext);return CICLO_WHILE;}

foreach {printf("%s",yytext);return CICLO_FOREACH;}

redo {printf("%s",yytext);return CICLO_REDO;}

until {printf("%s",yytext);return CICLO_UNTIL;}

retry {printf("%s",yytext);return CICLO_RETRY;}

print {printf("%s",yytext);return PRINT;}

open {printf("%s",yytext);return OPEN;}

get {printf("%s",yytext);return GET;}

set {printf("%s",yytext);return SET;}

throws {printf("%s",yytext);return THROWS;}

construct {printf("%s",yytext);return CONSTRUCT;}

show {printf("%s",yytext);return SHOW;}

close {printf("%s",yytext);return CLOSE;}

convert {printf("%s",yytext);return CONVERT;}

MATH {printf("%s",yytext);return MATH;}

SQRT {printf("%s",yytext);return SQRT;}

PI {printf("%s",yytext);return PI;}

{tipoDato} {printf("%s",yytext);return TIPODATO;}

{instancia} {printf("%s",yytext);return INSTANCIA;}

{modificador} {printf("%s",yytext);return MODIFICADOR;}

{seleccion} {printf("%s",yytext);return SELECCION;}

{switch} {printf("%s",yytext);return SWITCH;}

{parametro} {printf("%s",yytext);return PARAMETRO;}

{excepcion} {printf("%s",yytext);return EXCEPCION;}

{terminar} {printf("%s",yytext);return TERMINAR;}

{continuar} {printf("%s",yytext);return CONTINUAR;}

{detener} {printf("%s",yytext);return DETENER;}

{restriccion} {printf("%s",yytext);return RESTRICCION;}

{estructura} {printf("%s",yytext);return ESTRUCTURA;}

{eliminar} {printf("%s",yytext);return ELIMINAR;}

{escribir} {printf("%s",yytext);return ESCRIBIR;}

{extension} {printf("%s",yytext);return EXTENSION;}

{siguiente} {printf("%s",yytext);return SIGUIENTE;}

{inferencia} {printf("%s",yytext);return INFERENCIA;}

{enumerador} {printf("%s",yytext);return ENUMERADOR;}

{compilador} {printf("%s",yytext);return COMPILADOR;}

{propiedad} {printf("%s",yytext);return PROPIEDAD;}

{iniciacion} {printf("%s",yytext);return INICIACION;}

{interface} {printf("%s",yytext);return INTERFACE;}

{modulo} {printf("%s",yytext);return MODULO;}

{diccionario} {printf("%s",yytext);return DICCIONARIO;}

{nulo} {printf("%s",yytext);return NULO;}

{referencia} {printf("%s",yytext);return REFERENCIA;}

{contrario} {printf("%s",yytext);return ELSE;}

{contrarioif} {printf("%s",yytext);return ELIF;}

{condicional} {printf("%s",yytext);return CONDICIONAL;}

{alcance} {printf("%s",yytext);return ALCANCE;}

{declaracion} {printf("%s",yytext);return DECLARACION;}

{importacion} {printf("%s",yytext);return IMPORTACION;}

{funcion} {printf("%s",yytext);return FUNCION;}

{arreglo} {printf("%s",yytext);return ARRAY;}

{range} {printf("%s",yytext);return RANGE;}

{in} {printf("%s",yytext);return IN;}

{numero} {printf("%s",yytext);return NUMERO;}

{id} {printf("%s",yytext);return ID;}

"=" {printf("%s",yytext);return ASIGNACION;}

"+" {printf("%s",yytext);return OPARIT_ADD;}

"-" {printf("%s",yytext);return OPARIT_SUB;}

"*" {printf("%s",yytext);return OPARIT_MUL;}

"/" {printf("%s",yytext);return OPARIT_DIV;}

"%" {printf("%s",yytext);return OPARIT_REM;}

"%%" {printf("%s",yytext);return OPARIT_EXP;}

"++" {printf("%s",yytext);return OPARIT_INC;}

"--" {printf("%s",yytext);return OPARIT_DEC ;}

"(" {printf("%s",yytext);return AGRUP_LPAREN;}

")" {printf("%s",yytext);return AGRUP_RPAREN;}

"[" { printf("%s",yytext);return AGRUP_LBRACK;}

"]" {printf("%s",yytext);return AGRUP_RBRACK;}

"{" {printf("%s",yytext);return AGRUP_LBRACE;}

"}" {printf("%s",yytext);return AGRUP_RBRACE;}

"|" {printf("%s",yytext);return OPLOG_OR;}

"&&" {printf("%s",yytext);return OPLOG_AND;}

"!" {printf("%s",yytext);return OPLOG_NOT;}

"," {printf("%s",yytext);return COMA;}

"." {printf("%s",yytext);return PUNTO;}

"<" {printf("%s",yytext);return OPREL_LT;}

">" {printf("%s",yytext);return OPREL_GT;}

"<=" {printf("%s",yytext);return OPREL_LE;}

">=" {printf("%s",yytext);return OPREL_GE;}

"==" {printf("%s",yytext);return OPREL_EQ;}

"!=" {printf("%s",yytext);return OPREL_NE;}

"'" {printf("%s",yytext);return COMILLA;}

":" {printf("%s",yytext);return DOSPUNTOS;}

%%
/* Lenguaje C*/

/*Main C*/


