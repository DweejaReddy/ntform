lex program.l
yacc program.y
gcc y.tab.c -ll
./a.out test1
