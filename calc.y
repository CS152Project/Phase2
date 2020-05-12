%{
#include <stdio.h>
#include <stdlib.h>
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex();
void yyerror(const char *msg);
%}

%union{
   double * dval;
   int iVal;
   char * cVal;
}

%error-verbose
%start program
%token FUNCTION SEMICOLON COMMA COLON READ WRITE
%token MULT DIV PLUS MINUS EQUAL PER END FOR CONTINUE 
%token L_SQUARE_BRACKET R_SQUARE_BRACKET L_PAREN R_PAREN 
%token BEGIN_PARAMS END_PARAMS BEGINLOOP ENDLOOP BEGIN_LOCALS END_LOCALS 
%token BEGIN_BODY END_BODY INTEGER ARRAY OF ENDIF ELSE IF THEN WHILE DO  
%token EQ NEQ LT GT GTE LTE AND OR NOT TRUE FALSE RETURN ASSIGN  
%token <cVal> IDENT  
%token <iVal> NUMBER
%nonassoc UMINUS
%%

program: functions 
       {printf("program->functions\n");}
       ;
functions: /*epsilon*/
	 {printf("functions->epsilon\n");}
       | function functions
         {printf("functions->function functions\n");}
       ;
function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
	{printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY statements END_BODY\n");}
       ;
declarations: /*epsilon*/
	   {printf("declarations->epsilon\n");}
        | declaration SEMICOLON declarations 
           {printf("declarations->declaration SEMICOLON declarations\n");}
	;
declaration: ident COLON INTEGER
           {printf("declaration->identifiers SEMICOLON INTEGER\n");}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER 
	  {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
	  {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
        ;

ident: IDENT 
	   {printf("identifiers->IDENT\n");}
          | IDENT COMMA ident 
	  {printf("ident->IDENT COMMA ident\n");}
         ;
statements: statement SEMICOLON
	  {printf("statements->statement SEMICOLON\n");}
         | statement SEMICOLON statements
          {printf("statement->statement SEMICOLON statements\n");}
         ;
statement: var ASSIGN expressions
	 {printf("statement->Var ASSIGN expression\n");}
         | IF bool_expression THEN statements SEMICOLON ENDIF
         {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
         | IF bool_expression THEN ELSE statements SEMICOLON ENDIF
         {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}  
         | WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP
         {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
         | DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression
         {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
         | READ vars
         {printf("statement->READ Vars\n");}
         ;

bool_expression: relation_and_expression
		{printf("bool_expression->relation_and_expression\n");}
              | relation_and_expression OR relation_and_expression
                {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
         ;
relation_and_expression: relation_expression
		       {printf("relation_and_expression->relation_expression\n");}
                 | relation_expression AND relation_expression
		       {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
         ;
relation_expression: NOT expressions comp expressions
		  {printf("relation_expression->NOT expressions comp expressions\n");}
                 | NOT TRUE 
                 {printf("relation_expression->NOT TRUE\n");}
                 | NOT FALSE
                 {printf("relation_expression->NOT FALSE\n");}
                 | NOT L_PAREN bool_expression R_PAREN
                 {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");} 
                 | expressions comp expressions 
                 {printf("relation_expression->expressions comp expressions\n");}
                 | TRUE 
                 {printf("relation_expression->TRUE\n");}
                 | FALSE
                 {printf("relation_expression->FALSE\n");}
                 | L_PAREN bool_expression R_PAREN
                 {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
         ;


comp: EQ
    {printf("comp->EQ\n");}
     | NEQ 
    {printf("comp->NEQ\n");}
     | LT
    {printf("comp->LT\n");}
     | GT
    {printf("comp->GT\n");}
     | GTE
    {printf("comp->GTE\n");}
     | LTE
    {printf("comp->LTE\n");}
   ;

var: ident
    {printf("Var->identifiers\n");}
    | ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET 
    {printf("Var->identifiers L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
    | ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {printf("Var->identifiers L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
    ;

vars: var 
    {printf("Vars->var\n");}
    | var COMMA vars 
    {printf("var COMMA Vars\n");}
    ;
expression: multiplicative_expressions  
	  {printf("expression->multiplicative_expression\n");}
         
         ;
expressions: COMMA expression
	   {printf("expressions->COMMA expression\n");}
         ;

multiplicative_expression: terms
			 {printf("multiplicative_expression->terms\n");}
                        ;

multiplicative_expressions: PLUS multiplicative_expression
			  {printf("multiplicative->PLUS multiplicative_expression\n");}
                          | MINUS multiplicative_expression 
                          {printf("multiplicative_expressions->MINUS multiplicative_expression\n");}
                         ;

term: ident L_PAREN expressions R_PAREN 
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
    | var
    {printf("term->Var\n");}
    | NUMBER 
    {printf("term->NUMBER\n");}
    | L_PAREN expressions R_PAREN
    {printf("term->L_PAREN expressions R_PAREN\n");};
    ;

terms: MULT term
     {printf("terms->MUL term\n");}
     | DIV term
     {printf("terms->DIV term\n");}
     | PER term
     {printf("terms->PER term\n");}
     | MINUS term
     {printf("terms->MINUS term\n");}
    ;




%%

int main(int argc, char ** argv)
{
    if(argc >= 2)
    {
       yyin = fopen(argv[1], "r");
       if(yyin == NULL)
       { 
          yyin = stdin;
       }
    }  
    else 
    {
        yyin = stdin;
    }
    
    yyparse(); //calls yylex()
    return 1;

}

void yyerror(const char *msg){
   printf("Error in line %d, position %d: %s\n", currPos, currLine, msg);
}
