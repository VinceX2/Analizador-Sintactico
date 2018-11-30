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
%token ELSE
%token ELIF
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
%start namespace
%%

    namespace: ALCANCE KINGDOM AGRUP_LPAREN AGRUP_LBRACE program AGRUP_RBRACE AGRUP_RPAREN;

    program: declarations statements | declarations | statements;
    
    declarations: declarations declaration_var | declaration_var;

    declaration_var: 
                    names PUNTO TIPODATO
                    | names TIPODATO {printf("\nError Sintactico, falta Tipo de dato\n");} 
                    | names PUNTO {printf("\nError Sintactico, falta Tipo de dato\n");}
                    | names {printf("\nError Sintactico, falta declaracion\n");}
                    ;

    names: variable | names COMA variable;

    variable: NUMERO | ID;


    statements: statements statement | statement ; 

    statement: assigment | if_statement | for_statement | while_statement 
                | function_statement ;

    assigment: variable ASIGNACION expression ;

    tail: AGRUP_LBRACE program AGRUP_RBRACE ;

    if_statement: 
                 AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF tail elif optional_else
                 | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF tail optional_else
                 ;

    elif: 
                elif AGRUP_LPAREN expression AGRUP_RPAREN PUNTO ELIF tail
                | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO ELIF tail
                ;

    optional_else: ELSE tail;

    for_statement: AGRUP_LPAREN variable AGRUP_RPAREN IN RANGE AGRUP_LPAREN expression AGRUP_RPAREN 
                    PUNTO CICLO_FOR tail;
    
    while_statement: AGRUP_LPAREN expression AGRUP_RPAREN PUNTO CICLO_WHILE tail ;

    function_statement: return_type AGRUP_LPAREN functions_params AGRUP_RPAREN PUNTO FUNCION ID function_tail;
    
    return_type: TIPODATO;

    functions_params: parameters | ;

    parameters: parameters COMA parameter | parameter;

    parameter: declaration_var;

    function_tail: AGRUP_LPAREN AGRUP_LBRACE program return_optional AGRUP_RBRACE AGRUP_RPAREN ;

    return_optional: RETURN expression | ;

    expression: 
                variable relat_operator variable 
                | variable arit_operator variable
                | variable logic_operator variable
                | variable
                | variable COMA variable
                ;
    
    logic_operator: OPLOG_AND | OPLOG_NOT | OPLOG_OR ;


    arit_operator: OPARIT_ADD | OPARIT_DEC | OPARIT_DIV | OPARIT_EXP 
                    | OPARIT_INC | OPARIT_MUL | OPARIT_REM | OPARIT_SUB
                ;

    relat_operator: OPREL_EQ | OPREL_GE | OPREL_GT | OPREL_LE | OPREL_LT | OPREL_NE ;

    
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
        printf("\nSintaxis Correcta\n");
    }
    
    return 0;
	
}






