parser: mini_l.lex calc.y
	bison -v -d --file-prefix=y calc.y
	flex mini_l.lex
	gcc -o parser y.tab.c lex.yy.c -lfl
clean:
	rm -f lex.yy.c y.tab.* y.outout * .o calc    
		
