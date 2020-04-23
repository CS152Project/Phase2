parser: mini_l.lex
	bison -v -d --file-prefix=y calc.y
	flex mini_l.lex
	gcc -o lexer lex.yy.c -lfl
clean:
	rm -f lex.yy.c lexer
		
