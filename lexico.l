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



ciclo (do|while|foreach|redo|until|retry)
for (for)
alcance (king|knight|farmer)
referencia (is|with|this)
contrario (else)
range (range)

contrarioif (elif)
declaracion (new|castle)
importacion (tricks|using)
funcion (def|inline|print)
eof ';'
coma ','


agrupacion-lparen '('
agrupacion-rparen ')'
agrupacion-lbrack '['
agrupacion-rbrack ']'
agrupacion-lbrace '{'
agrupacion-rbrace '}'

arreglo (array)
condicional (when|unless|then)
in (in)
punto '.'

oprel-LT (<)
oprel-GT (>)
oprel-LE (<=)
oprel-GE (>=)
oprel-EQ (==)
oprel-NE (!=)

tipoDato (int,double,byte,char,short,long,bool,float)


oplog-or (\|)
oplog-and (\&&)
oplog-not (!)

nulo (none|pass)

metodo (stone|open|input)
instancia (void|from)
modificador (poison|virtual|register|auto|soul)
seleccion (select)
switch (switch)

parametro (map)
excepcion (raise|oops|try|throws|ensure|rescue)
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

{ws} {}

{tipoDato} {return TIPODATO;}



"=" { return ASIGNACION;}

class {return CLASS;}

if {return IF;}

{referencia} {return REFERENCIA;}

{contrario} { return CONTRARIO;}

{contrarioif} {return CONTRARIOIF;}


"+" {printf("%s",yytext);return OPARIT_ADD;}

"-" {return OPARIT_SUB;}

"*" {return OPARIT_MUL;}

"/" {return OPARIT_DIV;}

"%" {return OPARIT_REM;}

"%%" {return OPARIT_EXP;}

"++" {return OPARIT_INC;}

"--" {return OPARIT_DEC;}


{numero} { return NUMERO;}

{ciclo} {return CICLO;}

kingdom {printf("%s",yytext); return KINGDOM;}

{alcance} {printf("%s",yytext);return ALCANCE;}

yield|return {return RETURN;}

{declaracion} {return DECLARACION;}

{importacion} {return IMPORTACION;}

{funcion} {return FUNCION;}

"(" {printf("%s",yytext);return AGRUP_LPAREN;}

")" {printf("%s",yytext);return AGRUP_RPAREN;}

"[" {return AGRUP_LBRACK;}

"]" {return AGRUP_RBRACK;}

"{" {printf("%s",yytext);return AGRUP_LBRACE;}

"}" {printf("%s",yytext);return AGRUP_RBRACE;}

{oplog-or} {return OPLOG_OR;}

{oplog-and} {return OPLOG_AND;}

{oplog-not} {return OPLOG_NOT;}


{arreglo} {return ARRAY;}

{switch} {return SWITCH;}

{range} {return RANGE;}


"," {return COMA;}

{id} {printf("%s",yytext);return ID;}

'.' {return PUNTO;}

{oprel-LT} {return OPREL_LT;}
{oprel-GT} {return OPREL_GT;}
{oprel-LE} {return OPREL_LE;}
{oprel-GE} {return OPREL_GE;}
{oprel-EQ} {return OPREL_EQ;}
{oprel-NE} {return OPREL_NE;}



%%
/* Lenguaje C*/
  

/*Main C*/


