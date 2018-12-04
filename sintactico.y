%{
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
%token PRINT
%token COMILLA
%token OPEN
%token BRAKE
%token SHOW
%token SET
%token CONVERT
%token CLOSE
%token PI
%token MATH
%token SQRT
%token CONSTRUCT
%token DOSPUNTOS
%token GET
%token THROWS
%start namespace
%%

//--------------------------------Namespace---------------------------------------------

    namespace: ALCANCE KINGDOM AGRUP_LBRACK program AGRUP_RBRACK ;

//--------------------------------Program---------------------------------------------

        program: declarations statements | declarations | statements | ;
    
//--------------------------------Declarations---------------------------------------------

            declarations: declarations declaration_var | declaration_var;

//--------------------------------Variable Declaration---------------------------------------------

                declaration_var: 
                                names PUNTO TIPODATO
                                | names TIPODATO {printf("\nError Sintactico, falta Tipo de dato\n");} 
                                | names PUNTO {printf("\nError Sintactico, falta Tipo de dato\n");}
                                | names {printf("\nError Sintactico, falta declaracion\n");}
                                ;

                    names: variable | names COMA variable;

                        variable: NUMERO | ID ;

//--------------------------------Statements---------------------------------------------

            statements: statements statement | statement ; 

                statement: assigment | for_statement | while_statement assigment | if_statement 
                            | function_statement | do_statement | print_statement
                            | inc_statement | dec_statement | array_statement
                            | foreach_statement | class | open | this | return 
                            | brake | object | call_Function | propiedades
                            | constructor | throw | msgbox | tryCatch | close
                            | intString | aritmetic | error {msstate();};


//--------------------------------Statement Assigment---------------------------------------------
                
                assigment: variable ASIGNACION expression ;

                    tail: AGRUP_LBRACE program AGRUP_RBRACE ;

//--------------------------------Statement IF---------------------------------------------

                    if_statement: 
                                AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF AGRUP_LBRACK program
                                    error {mserror("]","IF");} 

                                | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF error program
                                    AGRUP_RBRACK {mserror("[","IF");}
                                
                                | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF AGRUP_LBRACK 
                                    program AGRUP_RBRACK elif optional_else

                                | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO IF 
                                    AGRUP_LBRACK program AGRUP_RBRACK optional_else

                                ;
//--------------------------------Statement ELIF---------------------------------------------

                    elif: 
                        AGRUP_LPAREN expression AGRUP_RPAREN PUNTO ELIF 
                            AGRUP_LBRACK program error {mserror("]","ELIF");} 
                        
                        | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO ELIF 
                            error program AGRUP_RBRACK {mserror("[","ELIF");} 
                        
                        | AGRUP_LPAREN expression AGRUP_RPAREN PUNTO ELIF 
                            AGRUP_LBRACK program AGRUP_RBRACK

                        ;

//--------------------------------Statement ELSE---------------------------------------------

                    optional_else: 
                                ELSE AGRUP_LBRACK program error {mserror("]","ELSE");}   

                                | ELSE error program AGRUP_RBRACK {mserror("[","ELSE");}  

                                | ELSE AGRUP_LBRACK program AGRUP_RBRACK
                                
                                | 
                                ;

                
//--------------------------------Statement FOR---------------------------------------------

                for_statement:
                            AGRUP_LPAREN variable AGRUP_RPAREN IN RANGE AGRUP_LPAREN variable AGRUP_RPAREN 
                                PUNTO CICLO_FOR AGRUP_LBRACE program error {mserror("}","FOR");}

                            | AGRUP_LPAREN variable AGRUP_RPAREN IN RANGE AGRUP_LPAREN variable AGRUP_RPAREN 
                                PUNTO CICLO_FOR error program AGRUP_RBRACE {mserror("{","FOR");}
                            
                            | AGRUP_LPAREN variable AGRUP_RPAREN IN RANGE AGRUP_LPAREN variable AGRUP_RPAREN 
                                PUNTO CICLO_FOR AGRUP_LBRACE program AGRUP_RBRACE
                            ;

//--------------------------------Statement ARRAY---------------------------------------------

                array_statement: ID AGRUP_LBRACK parameter_array AGRUP_RBRACK PUNTO TIPODATO;

                parameter_array: variable | parameter_array COMA variable;


//--------------------------------Statement WHILE---------------------------------------------

                while_statement: AGRUP_LPAREN expression AGRUP_RPAREN PUNTO CICLO_WHILE tail ;

//--------------------------------Statement DO---------------------------------------------

                do_statement: CICLO_DO AGRUP_LPAREN AGRUP_LBRACE program AGRUP_RBRACE AGRUP_RPAREN 
                                AGRUP_LPAREN expression AGRUP_RPAREN PUNTO CICLO_WHILE
                            ;

//--------------------------------Statement Function---------------------------------------------

                function_statement: return_type AGRUP_LPAREN functions_params AGRUP_RPAREN PUNTO FUNCION ID function_tail;
    
                    return_type: TIPODATO;

                    functions_params: parameters | ;

                    parameters: parameters COMA parameter | parameter;

                    parameter: declaration_var;

                    function_tail: AGRUP_LPAREN AGRUP_LBRACE program return_optional AGRUP_RBRACE AGRUP_RPAREN ;

                    return_optional: RETURN expression | ;

//--------------------------------Expressions---------------------------------------------
                expression: 
                            variable relat_operator variable 
                            | variable arit_operator variable
                            | variable logic_operator variable
                            | variable
                            | variable COMA variable
                            | COMILLA variable COMILLA
                            ;
    
                    logic_operator: OPLOG_AND | OPLOG_NOT | OPLOG_OR ;


                    arit_operator: OPARIT_ADD | OPARIT_DEC | OPARIT_DIV | OPARIT_EXP 
                                    | OPARIT_INC | OPARIT_MUL | OPARIT_REM | OPARIT_SUB
                                ;

                    relat_operator: OPREL_EQ | OPREL_GE | OPREL_GT | OPREL_LE | OPREL_LT | OPREL_NE ;
                
//--------------------------------Statement printf---------------------------------------------

                print_statement: AGRUP_LPAREN expression AGRUP_RPAREN PUNTO PRINT;

   
//--------------------------------Statement INC---------------------------------------------

                inc_statement: variable OPARIT_INC ;

//--------------------------------Statement DEC---------------------------------------------

                dec_statement: variable OPARIT_DEC;

//--------------------------------Statement FOREACH---------------------------------------------

                foreach_statement: AGRUP_LPAREN declarations IN variable AGRUP_RPAREN PUNTO CICLO_FOREACH tail;

//--------------------------------Statement CLASS---------------------------------------------
                class: AGRUP_LBRACK ID AGRUP_RBRACK PUNTO CLASS AGRUP_LPAREN AGRUP_LBRACE program AGRUP_RBRACE AGRUP_RPAREN ;

 //--------------------------------Statement CONSTRUCTOR--------------------------------------------- 

                constructor: CONSTRUCT AGRUP_LBRACK props AGRUP_RBRACK;
                props: ALCANCE ID | props COMA ALCANCE ID;

 //--------------------------------Statement OPEN---------------------------------------------           
                open:  OPEN PUNTO AGRUP_LPAREN AGRUP_RPAREN PUNTO variable ; 

 //--------------------------------Statement THIS---------------------------------------------      

                this: REFERENCIA PUNTO variable ; 

 //--------------------------------Statement RETURN---------------------------------------------  
                return: RETURN expression ;

 //--------------------------------Statement BRAKE---------------------------------------------  
                brake: BRAKE ;
    
 //--------------------------------Statement OBJECT---------------------------------------------  
                object: variable DECLARACION AGRUP_LPAREN variable AGRUP_RPAREN ;

 //--------------------------------Statement CALL FUNCTION---------------------------------------------  
                call_Function: FUNCION AGRUP_LPAREN variable AGRUP_RPAREN ;

 //--------------------------------Statement PROPIEDADES---------------------------------------------  
                propiedades: GET DOSPUNTOS RETURN ID COMA SET DOSPUNTOS ID ASIGNACION ID;

 //--------------------------------Statement Throws---------------------------------------------              
                throw: THROWS AGRUP_LBRACK variable AGRUP_RBRACK;

 //--------------------------------Statement MSGBBOX---------------------------------------------  
                msgbox: AGRUP_LBRACK expression AGRUP_RBRACK PUNTO SHOW;

 //--------------------------------Statement TRY CATCH---------------------------------------------  
                tryCatch: TRY AGRUP_LPAREN AGRUP_LBRACE program AGRUP_RBRACE AGRUP_RPAREN OOPS 
                           AGRUP_LPAREN expression AGRUP_RPAREN 
                           AGRUP_LPAREN AGRUP_LBRACE program AGRUP_RBRACE AGRUP_RPAREN;

 //--------------------------------Statement Cerrar---------------------------------------------                            
                close: CLOSE AGRUP_LPAREN AGRUP_RPAREN ;

 //--------------------------------Statement COnvert INT String---------------------------------------------             
            
                intString: CONVERT AGRUP_LBRACK expression AGRUP_RBRACK PUNTO TIPODATO ;

//--------------------------------Statement Aritmetic---------------------------------------------    
                aritmetic: MATH AGRUP_LBRACK expression AGRUP_RBRACK PUNTO SQRT;

//--------------------------------Statement ---------------------------------------------   

                aritmetic: MATH AGRUP_LBRACK expression AGRUP_RBRACK PUNTO PI;               




%%
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


