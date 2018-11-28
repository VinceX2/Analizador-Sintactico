%{
    #include<stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "string.h"

    extern int yylex(void);
    extern char *yytext;
    extern int linea;   
    extern int yyparse();
    extern FILE *yyin;
    void yyerror(char *s);
%}

%union{
    
}

%token TIPODATO
%token INSTANCIA
%token MODIFICADOR
%token SELECCION
%token SWITCH
%token PARAMETRO
%token EXCEPCION
%token TERMINAR
%token CONTINUAR
%token DETENER
%token RESTRICCION
%token ESTRUCTURA
%token ELIMINAR
%token ESCRIBIR
%token EXTENSION
%token SIGUIENTE
%token INFERENCIA
%token ENUMERADOR
%token COMPILADOR
%token PROPIEDAD
%token INICIACION
%token INTERFACE
%token MODULO
%token DICCIONARIO
%token NULO
%token REFERENCIA
%token CONTRARIO
%token CONTRARIOIF
%token CONDICIONAL
%token ALCANCE
%token DECLARACION
%token IMPORTACION
%token FUNCION
%token ARRAY
%token RANGE
%token IN
%token NUMERO
%token ID
%token CLASS
%token IF;
%token KINGDOM
%token RETURN
%token TRY
%token OOPS;
%token CICLO_FOR
%token CICLO_DO
%token CICLO_WHILE
%token CICLO_FOREACH
%token CICLO_REDO
%token CICLO_UNTIL
%token CICLO_RETRY
%token ASIGNACION
%token OPARIT_ADD
%token OPARIT_SUB
%token OPARIT_MUL
%token OPARIT_DIV
%token OPARIT_REM
%token OPARIT_EXP
%token OPARIT_INC
%token OPARIT_DEC
%token AGRUP_LPAREN
%token AGRUP_RPAREN
%token AGRUP_LBRACK
%token AGRUP_RBRACK
%token AGRUP_LBRACE
%token AGRUP_RBRACE
%token OPLOG_OR
%token OPLOG_AND
%token OPLOG_NOT
%token COMA
%token PUNTO
%token OPREL_LT
%token OPREL_GT
%token OPREL_LE
%token OPREL_GE
%token OPREL_EQ
%token OPREL_NE

%start FUNCION_PRINCIPAL
%%

    FUNCION_PRINCIPAL: FUNCION_1;
    
    FUNCION_1: ALCANCE KINGDOM AGRUP_LPAREN AGRUP_LBRACE AGRUP_RBRACE AGRUP_RPAREN;
    

 


%%
void yyerror(char *s){
    printf("\n%s \n",s);
}

int main(int argc, char **argv){

    if (argc>1){
        yyin=fopen(argv[1],"rt");
    }
    else{
        yyin=fopen("text2.txt","rt");
        
    }

    if(yyparse()==0){
        printf("\nAnalisis concluido sin errores\n");
    }
    
    return 0;
	
}






