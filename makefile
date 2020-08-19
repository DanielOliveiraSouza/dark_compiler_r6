all:
	 bison -d src/compiler_6-rc2.y -o src/y.tab.c
	 cd src && flex compiler_6-rc2.l
	 gcc src/lex.yy.c  src/y.tab.c -o sintatico.exe -I include/
	 
debug:
	 bison -d compiler_6-rc2.y -o src/y.tab.c -I include/
	 flex src/compiler_6-rc2.l
	 gcc src/lex.yy.c  src/y.tab.c -o sintatico.exe -I include/ -std=c11 -g 

cplus:
	 bison -d compiler_6-rc2.y -o y.tab.c -I include/
	 flex src/compiler_6-rc2.l
	 g++ src/lex.yy.c  src/y.tab.c -o sintatico.exe -I include/
	
c99:
	 bison -d compiler_6-rc2.y -o y.tab.c -I include/
	 flex src/compiler_6-rc2.l
	 gcc src/lex.yy.c  src/y.tab.c -o sintatico.exe -I include/  -std=c99
	
debugc99:
	 bison -d compiler_6-rc2.y -o y.tab.c -I include/
	 flex compiler_6-rc2.l
	 gcc src/lex.yy.c  src/y.tab.c -o sintatico.exe -I include/ -std=c99 -g
	 
clean:
	rm src/y.tab.c src/lex.yy.c sintatico.exe  lex.yy.c -v 
	 

	
