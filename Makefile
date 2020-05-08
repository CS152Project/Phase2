parser: mini_l.lex lex.y
	bison -v -d --file-prefix=y lex.y
	flex mini_l.lex
	gcc -o parser y.tab.c lex.yy.c -lfl
clean:
	rm -f lex.yy.c y.tab.* y.outout * .0 calc
		
