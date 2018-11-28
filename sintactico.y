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
    float real;
    int numero;
    char* texto;
}

%token TIPODATO
%token WS
%token CLASS
%token ASIGNACION
%token IF 
%token CONTRARIO
%token CONTRARIOIF
%token OPARIT_ADD
%token OPARIT_SUB
%token OPARIT_MUL
%token OPARIT_DIV
%token OPARIT_REM
%token OPARIT_EXP
%token OPARIT_INC
%token OPARIT_DEC
%token NUMERO
%token CICLO
%token KINGDOM
%token RETURN
%token DECLARACION
%token IMPORTACION
%token FUNCION
%token AGRUP_LPAREN
%token AGRUP_RPAREN
%token AGRUP_LBRACK
%token AGRUP_RBRACK
%token AGRUP_LBRACE
%token AGRUP_RBRACE
%token OPLOG_OR
%token OPLOG_AND
%token OPLOG_NOT
%token ID
%token PUNTO
%token OPREL_LT
%token OPREL_GT
%token OPREL_LE
%token OPREL_GE
%token OPREL_EQ
%token OPREL_NE
%token COMA
%token REFERENCIA
%token RANGE        
%token FOR
%token SWITCH
%token ARRAY
%token ALCANCE
%start FUNCION_PRINCIPAL
%%

    FUNCION_PRINCIPAL: FUNCION_1;
    
    FUNCION_1: ALCANCE KINGDOM AGRUP_LPAREN AGRUP_LBRACE VARIABLE AGRUP_RBRACE AGRUP_RPAREN;

    VARIABLE: ID OPARIT_ADD ID;


%%
void yyerror(char *s){
    printf("%s \n",s);
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






