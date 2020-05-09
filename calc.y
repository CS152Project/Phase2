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
%token L_SQUARE_BRACKET R_SQUARE_BRACKET L_PAREN R_PAREN statements declarations 
%token BEGIN_PARAMS END_PARAMS BEGINLOOP ENDLOOP BEGIN_LOCALS END_LOCALS 
%token BEGIN_BODY END_BODY INTEGER ARRAY OF ENDIF ELSE IF THEN WHILE DO  
%token EQ NEQ LT GT GTE LTE AND OR NOT TRUE FALSE RETURN ASSIGN  
%token <cVal> IDENT identifiers 
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
function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY END_BODY
	{printf("function->FUNCTION IDENT SEMICOLON BEGIN_PARAMS declaration END_PARAMS BEGIN_LOCALS declaration END_LOCALS BEGIN_BODY statements END_BODY\n");}
       ;
declaration: /*epsilon*/
	   {printf("declarations->epsilon\n");}
        | declaration SEMICOLON declarations
           {printf("declaration->declaration SEMICOLON declarations\n");}
        | identifiers COLON INTEGER
           {printf("declaration->identifiers COLON INTEGER\n");}
        ;
declaration: identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
	  {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
        ; 

expression: multiplicative_expression
	  {printf("expression->multiplicative_expression\n");}
        ;
expression: multiplicative_expression PLUS multiplicative_expression
	  {printf("expression->multiplicative_expression ADD multiplicative_expression\n");}
        ;
expression: multiplicative_expression MINUS multiplicative_expression
	  {printf("expression->multiplicative_expression SUB multiplicative_expression\n");}
        ;

multiplicative_expression: term
			 {printf("multiplicative_expression->term\n");}
         ;
multiplicative_expression: term PER term
			 {printf("multiplicative_expression->term PER term\n");}
         ;

term: Var
    {printf("term->Var\n");}
  | NUMBER 
    {printf("term->NUMBER\n");}
  | L_PAREN expression R_PAREN 
    {printf("term->L_PAREN expression R_PAREN\n");}
   ;
term: IDENT L_PAREN expression R_PAREN
    {printf("term->IDENT L_PAREN expression R_PAREN\n");}
     ;

Var: IDENT
   {printf("Var->IDENT\n");}
    ;
Var: IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
   {printf("Var->IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
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
