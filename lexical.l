%option noyywrap
%{
    /* Declaraciones C*/
    #include <stdio.h>
    #include <string.h>
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
oparit-add (\+)       
oparit-sub (\-)
oparit-mul (\*)
oparit-div (\/) 
oparit-rem (\%)
oparit-exp (\**)
oparit-inc (\++)
oparit-dec (\--)

asignacion [=]

ciclo (do|while|for|foreach|redo|until|retry)
alcance (king|knight|farmer)
referencia (is|with|this)
contrario (else)

contrarioif (elif)
declaracion (new|castle)
importacion (tricks|using)
funcion (def|inline|print)
eof (;|,|:)

agrupacion-lparen (\()
agrupacion-rparen (\))
agrupacion-lbrack (\[)
agrupacion-rbrack (\])
agrupacion-lbrace (\{)
agrupacion-rbrace (\})

arreglo (array)
condicional (when|unless|then|in)
punto \.

oprel-LT (<)
oprel-GT (>)
oprel-LE (<=)
oprel-GE (>=)
oprel-EQ (==)
oprel-NE (!=)

tipodato-int (int)
tipodato-double (double)
tipodato-byte (byte)
tipodato-char (char)
tipodato-short (short)
tipodato-long (long)
tipodato-bool (bool)
tipodato-float (float)

oplog-or (\|)
oplog-and (\&&)
oplog-not (!)

nulo (none|pass)

metodo (stone|open|input)
instancia (void|from)
modificador (poison|virtual|register|auto|soul)
seleccion (switch|select)

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

{tipodato-int} {return T_DATO_INT}

{tipodato-double} {return T_DATO_DOUBLE}

{tipodato-byte} {return T_DATO_BYTE}

{tipodato-char} {return T_DATO_CHAR}

{tipodato-short} {return T_DATO_SHORT}

{tipodato-long} {return }

{tipodato-bool} {return }

{tipodato-float} {return }

{ws} {}

class { printf("\n< Token [ CLASE ] Lexema [ %s ] >\n",yytext); }

{asignacion} { printf("\n< Token [ ASIGNACION ] Lexema [ %s ] >\n",yytext); }

if { printf("\n< Token [ IF ] Lexema [ %s ] >\n",yytext); }

{referencia} { printf("\n< Token [ REFERENCIA ] Lexema [ %s ] >\n",yytext); }

{contrario} { printf("\n< Token [ ELSE ] Lexema [ %s ] >\n",yytext); }

{contrarioif} { printf("\n< Token [ ELSEIF ] Lexema [ %s ] >\n",yytext); }

{oparit-add} { printf("\n< Token [ OPE.ARITMETICO ADD ] Lexema [ %s ] >\n",yytext); }

{oparit-sub} { printf("\n< Token [ OPE.ARITMETICO SUB] Lexema [ %s ] >\n",yytext); }

{oparit-mul} { printf("\n< Token [ OPE.ARITMETICO MUL] Lexema [ %s ] >\n",yytext); }

{oparit-div} { printf("\n< Token [ OPE.ARITMETICO DIV] Lexema [ %s ] >\n",yytext); }

{oparit-rem} { printf("\n< Token [ OPE.ARITMETICO REM] Lexema [ %s ] >\n",yytext); }

{oparit-exp} { printf("\n< Token [ OPE.ARITMETICO EXP] Lexema [ %s ] >\n",yytext); }

{oparit-inc} { printf("\n< Token [ OPE.ARITMETICO INC] Lexema [ %s ] >\n",yytext); }

{oparit-dec} { printf("\n< Token [ OPE.ARITMETICO DEC] Lexema [ %s ] >\n",yytext); }

{numero} { printf("\n< Token [ NUMERO ] Lexema [ %s ] >\n",yytext); }

{ciclo} { printf("\n< Token [ CICLO ] Lexema [ %s ] >\n",yytext); }

kingdom { printf("\n< Token [ NAMESPACE ] Lexema [ %s ] >\n",yytext); }

{alcance} { printf("\n< Token [ ALCANCE ] Lexema [ %s ] >\n",yytext); }

yield|return { printf("\n< Token [ RETORNO ] Lexema [ %s ] >\n",yytext); }

{declaracion} { printf("\n< Token [ DECLARACION ] Lexema [ %s ] >\n",yytext); }

{importacion} { printf("\n< Token [ IMPORTACION ] Lexema [ %s ] >\n",yytext); }

{funcion} { printf("\n< Token [ FUNCION ] Lexema [ %s ] >\n",yytext); }

{agrupacion-lparen} { printf("\n< Token [ AGRUPACION LPAREN] Lexema [ %s ] >\n",yytext); }

{agrupacion-rparen} { printf("\n< Token [ AGRUPACION RPAREN] Lexema [ %s ] >\n",yytext); }

{agrupacion-lbrack} { printf("\n< Token [ AGRUPACION LBRACK] Lexema [ %s ] >\n",yytext); }

{agrupacion-rbrack} { printf("\n< Token [ AGRUPACION RBRACK] Lexema [ %s ] >\n",yytext); }

{agrupacion-lbrace} { printf("\n< Token [ AGRUPACION LBRACE] Lexema [ %s ] >\n",yytext); }

{agrupacion-rbrace} { printf("\n< Token [ AGRUPACION RBRACE] Lexema [ %s ] >\n",yytext); }

{eof} { printf("\n< Token [ PUNTUACION ] Lexema [ %s ] >\n",yytext); }

{arreglo} { printf("\n< Token [ ARREGLO ] Lexema [ %s ] >\n",yytext); }

{condicional} { printf("\n< Token [ CONDICIONAL ] Lexema [ %s ] >\n",yytext); }

{oplog-or} { printf("\n< Token [ OP. LOGICO OR] Lexema [ %s ] >\n",yytext); }

{oplog-and} { printf("\n< Token [ OP. LOGICO AND] Lexema [ %s ] >\n",yytext); }

{oplog-not} { printf("\n< Token [ OP. LOGICO NOT] Lexema [ %s ] >\n",yytext); }

assert { printf("\n< Token [ AFIRMACION ] Lexema [ %s ] >\n",yytext); }

{nulo} { printf("\n< Token [ NULO ] Lexema [ %s ] >\n",yytext); }

as { printf("\n< Token [ ALIAS ] Lexema [ %s ] >\n",yytext); }

async { printf("\n< Token [ ASINCRONO ] Lexema [ %s ] >\n",yytext); }

await { printf("\n< Token [ SUSPENDER ] Lexema [ %s ] >\n",yytext); }

{metodo} { printf("\n< Token [ METODO ] Lexema [ %s ] >\n",yytext); }

false { printf("\n< Token [ FALSO ] Lexema [ %s ] >\n",yytext); }

true { printf("\n< Token [ VERDADERO ] Lexema [ %s ] >\n",yytext); }

case { printf("\n< Token [ CASO ] Lexema [ %s ] >\n",yytext); }

range { printf("\n< Token [ Rango ] Lexema [ %s ] >\n",yytext); }

{instancia} { printf("\n< Token [ INSTANCIA ] Lexema [ %s ] >\n",yytext); }

{modificador} { printf("\n< Token [ MODIFICADOR ] Lexema [ %s ] >\n",yytext); }

super { printf("\n< Token [ CONSTRUCTOR ] Lexema [ %s ] >\n",yytext); }

type { printf("\n< Token [ TIPO ] Lexema [ %s ] >\n",yytext); }

nil { printf("\n< Token [ PUNTERO ] Lexema [ %s ] >\n",yytext); }

tuple { printf("\n< Token [ TUPLA ] Lexema [ %s ] >\n",yytext); }

go { printf("\n< Token [ IR ] Lexema [ %s ] >\n",yytext); }

ice { printf("\n< Token [ PREDETERMINADO ] Lexema [ %s ] >\n",yytext); }

fire { printf("\n< Token [ CONSTANTE ] Lexema [ %s ] >\n",yytext); }

dragon { printf("\n< Token [ ABSTRACTO ] Lexema [ %s ] >\n",yytext); }

{seleccion} { printf("\n< Token [ SELECCION ] Lexema [ %s ] >\n",yytext); }

{parametro} { printf("\n< Token [ PARAMETRO ] Lexema [ %s ] >\n",yytext); }

{excepcion} { printf("\n< Token [ EXCEPCION ] Lexema [ %s ] >\n",yytext);}

{terminar} { printf("\n< Token [ TERMINAR ] Lexema [ %s ] >\n",yytext);}

{continuar} { printf("\n< Token [ CONTINUAR ] Lexema [ %s ] >\n",yytext);}

{detener} { printf("\n< Token [ DETENER ] Lexema [ %s ] >\n",yytext);}

{restriccion} { printf("\n< Token [ RESTRICCION ] Lexema [ %s ] >\n",yytext);}

{estructura} { printf("\n< Token [ ESTRUCTURA ] Lexema [ %s ] >\n",yytext);}

{eliminar} { printf("\n< Token [ ELIMINAR ] Lexema [ %s ] >\n",yytext);}

{escribir} { printf("\n< Token [ ESCRIBIR ] Lexema [ %s ] >\n",yytext);}

{extension} { printf("\n< Token [ EXTENSION ] Lexema [ %s ] >\n",yytext);}

{siguiente} { printf("\n< Token [ SIGUIENTE ] Lexema [ %s ] >\n",yytext);}

{inferencia} { printf("\n< Token [ INFERENCIA ] Lexema [ %s ] >\n",yytext);}

{enumerador} { printf("\n< Token [ ENUMERADOR ] Lexema [ %s ] >\n",yytext);}

{compilador} { printf("\n< Token [ COMPILADOR ] Lexema [ %s ] >\n",yytext);}

{propiedad} { printf("\n< Token [ PROPIEDAD ] Lexema [ %s ] >\n",yytext);}

{iniciacion} { printf("\n< Token [ INICIACION ] Lexema [ %s ] >\n",yytext);}

{interface} { printf("\n< Token [ INTERFACE ] Lexema [ %s ] >\n",yytext);}

{modulo} { printf("\n< Token [ MODULO ] Lexema [ %s ] >\n",yytext);}

{diccionario} { printf("\n< Token [ DICCIONARIO ] Lexema [ %s ] >\n",yytext);}

empty { printf("\n< Token [ DICCIONARIO ] Lexema [ %s ] >\n",yytext);}

endfors { printf("\n< Token [ CICLO ] Lexema [ %s ] >\n",yytext);}

endforeach { printf("\n< Token [ CICLO ] Lexema [ %s ] >\n",yytext);}

endif { printf("\n< Token [ CONDICION ] Lexema [ %s ] >\n",yytext);}

endswitch { printf("\n< Token [ SELECCION ] Lexema [ %s ] >\n",yytext);}

endwhile { printf("\n< Token [ CICLO ] Lexema [ %s ] >\n",yytext);}

eval { printf("\n< Token [ ENUMERADOR ] Lexema [ %s ] >\n",yytext);}

exit { printf("\n< Token [ RETORNO ] Lexema [ %s ] >\n",yytext);}

button|label|pictureBox|buttonflaco|buttongo|clock|datagrid|timer|navigator|task { printf("\n< Token [ Etiqueta ] Lexema [ %s ] >\n",yytext);}

agrandar|changeColor|transform|sendTo|SaveIn  { printf("\n< Token [ TRANSFORMACION ] Lexema [ %s ] >\n",yytext);}

cout|cin|endl|include|int_min|intmax|iomanip|iostream { printf("\n< Token [ LIBRERIA ] Lexema [ %s ] >\n",yytext);}

delfin { printf("\n< Token [ TIPO DE DATO ] Lexema [ %s ] >\n",yytext);}

enumVal|final|instanceof|volatilewhil { printf("\n< Token [ ENUMERADOR ] Lexema [ %s ] >\n",yytext);}

math { printf("\n< Token [ LIBRERIA ] Lexema [ %s ] >\n",yytext);}

alert|all|area|blur|checkbox|clear|closed|confirm|crypto|element { printf("\n< Token [ SELECCION ] Lexema [ %s ] >\n",yytext);}

focus|frames|frameRate|hidden|history|link|layers { printf("\n< Token [ CAPAS ] Lexema [ %s ] >\n",yytext);}

package|pkcs|pluggin|prompt { printf("\n< Token [ PAQUETE ] Lexema [ %s ] >\n",yytext);}

register|typedef|bycopy|sizeof { printf("\n< Token [ METODO ] Lexema [ %s ] >\n",yytext);}

@interface|@end|@implementation|@protocol|@class|@public|@protected|@private { printf("\n< Token [ DEPENDENCIAS ] Lexema [ %s ] >\n",yytext);}

@property|@try|@thow|@catch|@finally|@synthesize|@dynamic|@selector|@atomic|@nonatomic|@retain { printf("\n< Token [ DEPENDENCIAS ] Lexema [ %s ] >\n",yytext);}

{id} {  
        for(int a = 0;a < 10; a++){
            strcpy(example1,yytext);
            result = strcmp(symbol_table[a],example1);

            if(result == 0){
                 printf("\nEl ID ya se encuentra en la tabla de simbolos\n");
                 break;
            }
        }
        if(result != 0){
            strcpy(symbol_table[i],yytext);
            printf("\n< Token [ ID ] Posicion [ %d ] >\n", i);
            i++;
        }
    }

{punto} { printf("\n< Token [ PUNTO ] Lexema [ %s ] >\n",yytext); }

{oprel-LT} { printf("\n< Token [ OP. RELACIONAL LT] Lexema [ %s ] >\n",yytext); }
{oprel-GT} { printf("\n< Token [ OP. RELACIONAL GT] Lexema [ %s ] >\n",yytext); }
{oprel-LE} { printf("\n< Token [ OP. RELACIONAL LE] Lexema [ %s ] >\n",yytext); }
{oprel-GE} { printf("\n< Token [ OP. RELACIONAL GE] Lexema [ %s ] >\n",yytext); }
{oprel-EQ} { printf("\n< Token [ OP. RELACIONAL EQ] Lexema [ %s ] >\n",yytext); }
{oprel-NE} { printf("\n< Token [ OP. RELACIONAL NE] Lexema [ %s ] >\n",yytext); }

%%

/* Lenguaje C*/
  

/*Main C*/

int main(){
    FILE *f1;
    f1 = fopen("text2.txt","r");
    yyin=f1;
    yylex();
 
    printf("\n------------------------------\n");
    printf("\n      Tabla de simbolos     \n");
    printf("------------        ----------\n");
    printf("  Nombre        |    Posicion \n");
    printf("------------        ----------\n");
    
	for(int j = 0;j < i ; j++){   
        if(symbol_table[j]!=NULL){
	        printf("%s\t\t\t[%d]\n",symbol_table + j ,j);
	    } 
	}
    return 0;
}
