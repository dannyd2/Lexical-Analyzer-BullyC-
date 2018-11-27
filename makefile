###############################################################################
# purpose: makefile programming assignment 1
# created: 01-19-2018
#  author: Joe Crumpton
#
# You do not need to modify this file.
#
###############################################################################
LEX		=	flex
.PRECIOUS 	=	driver.cpp rules.l lexer.h 

prog1.exe: lex.yy.o driver.o
	g++ -g -o $@ $^

lex.yy.o: lex.yy.c lexer.h
	cc -g -o $@ -c lex.yy.c

lex.yy.c: rules.l
	$(LEX) $^

clean: 
	$(RM) *.o lex.yy.c prog1.exe

