%{
   int currLine = 1, currPos = 1;
   int numNumbers = 0;
   int numOperators = 0;
   int numParens = 0;
   int numBrackets = 0;
   int numRelOperators = 0;
   int numWords = 0;
   int numSemiColons = 0;
   int numColons = 0;
   int numSpecialDesign = 0;
   int numCommas = 0;
   int numEquals = 0;
   int numAssignSymbols = 0;
   int numComments = 0;
%}

DIGIT    [0-9]
LETTER    [a-zA-Z]
INTEGER  [0-9]+
NewLine  [\n] 
   
%%

"-"            {printf("MINUS\n"); currPos += yyleng; numOperators++;}
"+"            {printf("PLUS\n"); currPos += yyleng; numOperators++;}
"*"            {printf("MULT\n"); currPos += yyleng; numOperators++;}
"/"            {printf("DIV\n"); currPos += yyleng; numOperators++;}
"%"            {printf("MOD\n"); currPos += yyleng; numOperators++;}
"="            {printf("EQUAL\n"); currPos += yyleng; numEquals++;}
"("            {printf("L_PAREN\n"); currPos += yyleng; numParens++;}
")"            {printf("R_PAREN\n"); currPos += yyleng; numParens++;}
"["            {printf("L_SQUARE_BRACKET\n"); currPos += yyleng; numBrackets++;}
"]"            {printf("R_SQUARE_BRACKET\n"); currPos += yyleng; numBrackets++;} 
"=="           {printf("EQ\n"); currPos += yyleng; numRelOperators++;}
"<>"           {printf("NEQ\n"); currPos += yyleng; numRelOperators++;}
"<"            {printf("LT\n"); currPos += yyleng; numRelOperators++;}
">"            {printf("GT\n"); currPos += yyleng; numRelOperators++;}
"<="           {printf("LTE\n"); currPos += yyleng; numRelOperators++;}
">="           {printf("GTE\n"); currPos += yyleng; numRelOperators++;}
";"            {printf("SEMICOLON\n"); currPos += yyleng; numSemiColons++;}
","            {printf("COMMA\n"); currPos += yyleng; numCommas++;}
":"            {printf("COLON\n"); currPos += yyleng; numColons++;}
":="           {printf("ASSIGN\n"); currPos += yyleng; numAssignSymbols++;}
"function"     {printf("FUNCTION\n"); currPos += yyleng; numWords++;}
"beginparams"  {printf("BEGIN_PARAMS\n"); currPos += yyleng; numWords++;}
"endparams"    {printf("END_PARAMS\n"); currPos += yyleng; numWords++;}
"beginlocals"  {printf("BEGIN_LOCALS\n"); currPos += yyleng; numWords++;}
"endlocals"    {printf("END_LOCALS\n"); currPos += yyleng; numWords++;}
"beginbody"    {printf("BEGIN_BODY\n"); currPos += yyleng; numWords++;}
"endbody"      {printf("END_BODY\n"); currPos += yyleng; numWords++;}
"integer"      {printf("INTEGER\n"); currPos += yyleng; numWords++;}
"array"        {printf("ARRAY\n"); currPos += yyleng; numWords++;}
"of"           {printf("OF\n"); currPos += yyleng; numWords++;}
"if"           {printf("IF\n"); currPos += yyleng; numWords++;}
"then"         {printf("THEN\n"); currPos += yyleng; numWords++;}
"endif"        {printf("ENDIF\n"); currPos += yyleng; numWords++;}
"else"         {printf("ELSE\n"); currPos += yyleng; numWords++;}
"while"        {printf("WHILE\n"); currPos += yyleng; numWords++;}
"do"           {printf("DO\n"); currPos += yyleng; numWords++;}
"for"          {printf("FOR\n"); currPos += yyleng; numWords++;}
"beginloop"    {printf("BEGINLOOP\n"); currPos += yyleng; numWords++;}
"endloop"      {printf("ENDLOOP\n"); currPos += yyleng; numWords++;}
"continue"     {printf("CONTINUE\n"); currPos += yyleng; numWords++;}
"read"         {printf("READ\n"); currPos += yyleng; numWords++;}
"write"        {printf("WRITE\n"); currPos += yyleng; numWords++;}
"and"          {printf("AND\n"); currPos += yyleng; numWords++;}
"or"           {printf("OR\n"); currPos += yyleng; numWords++;} 
"not"          {printf("NOT\n"); currPos += yyleng; numWords++;}
"true"         {printf("TRUE\n"); currPos += yyleng; numWords++;}
"false"        {printf("FALSE\n"); currPos += yyleng; numWords++;}
"return"       {printf("RETURN\n"); currPos += yyleng; numWords++;}

{INTEGER}      {printf("NUMBERS %s\n", yytext); currPos += yyleng; numNumbers++;}
({LETTER}({LETTER}|{DIGIT}|"_")*({LETTER}|{DIGIT}))|({LETTER})      {printf("IDENTIFIERS %s\n", yytext); currPos += yyleng; numWords++;}
[+-/*%](<>|<=|>=|<|>|==)     {printf("NUMBER OPERATORS %s\n", yytext); currPos += yyleng; numNumbers++;} 
"##".*{NewLine}           {currPos += yyleng; numComments++;}     

[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1;}

.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

{LETTER}({LETTER}|{DIGIT}|"_")*"_"              {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(1);}

({DIGIT}|"_")({LETTER}|{DIGIT}|"_")*               {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(2);}


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
   
   yylex();
   
   printf("# Numbers: %d\n", numNumbers);
   printf("# Operators: %d\n", numOperators);
   printf("# Parentheses: %d\n", numParens);
   printf("# Equal Signs: %d\n", numEquals);
   printf("# Brackets: %d\n", numBrackets);
   printf("# Relational Operators: %d\n", numRelOperators);
   printf("# Semicolons: %d\n", numSemiColons);
   printf("# Colons: %d\n", numColons);
   printf("# Commas: %d\n", numCommas);
   printf("# Words: %d\n", numWords);
   printf("# Assign Symbols: %d\n", numAssignSymbols);
   printf("# Comments: %d\n", numComments);
}

