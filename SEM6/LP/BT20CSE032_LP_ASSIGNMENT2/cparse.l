/* LEX Specification for MINI C PARSER */
alpha [a-zA-Z]
digit [0-9]
%%
[ \t]			;
[ \n]   	{ yylineno = yylineno + 1;}
int		return INT;
void 		return VOID;
while		return WHILE;
if		return IF;
do		return DO;
return  	return RETURN;
break		return BREAK;
define  	return DEFINE;
include 	return INCLUDE;
case 		return CASE;
switch		return SWITCH;
main		return MAIN;
default 	return DEFAULT;
continue 	return CONTINUE;
else		return ELSE;
printf  	return PRINTF;
{digit}+      	return NUM;
{digit}+(\.{digit}+) return REAL;
{alpha}({alpha}|{digit})* return ID;
"<="   		return LE;
">="    	return GE;
"=="    	return EQ;
"!="    	return NE;
">"		return GT;
"<"		return LT;
\.     		return DOT;
[!%]		return ID;
\/\/.* 			 ;
\/\*(.*\n)*.*\*\/ 	 ;
.      		return yytext[0];
%%

int main(int argc, char** argv) {
    if(argc < 2) {
        printf("Usage: ./lexer <input file>\n");
    }
    else {
        FILE* inFile = fopen(argv[1], "r");
        if(!inFile) {
            printf("Error opening file.\n");
            return 1;
        }
        yyin = inFile;
        yylex();
    }
}
