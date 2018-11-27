//*****************************************************************************
// purpose: Programming Assignment 1 (CSE 4713 / 6713) 
//          List of tokens for BullyC
// created: 01/23/2018
//  author: Daniel Dover 
//
// You will modify this file to define the tokens used in BullyC
//
//*****************************************************************************

#ifndef LEXER_H
#define LEXER_H


// List of token codes
#define TOK_IF           1001  //if
#define TOK_ELSE         1002  //else
#define TOK_FOR          1003  //for
#define TOK_WHILE        1004  //while
#define TOK_PRINT        1005  //print
#define TOK_RETURN       1006  //return 
#define TOK_CONTINUE     1007  //continue
#define TOK_BREAK        1008  //break
#define TOK_READ         1010  //read
#define TOK_LET          1011  //let
#define TOK_INT          1100  //int
#define TOK_FLOAT        1101  //float
#define TOK_STRING       1102  //string
#define TOK_SEMICOLON    2000  //;
#define TOK_OPENPAREN    2001  //(
#define TOK_CLOSEPAREN   2002  //)
#define TOK_OPENBRACE    2003  //{
#define TOK_CLOSEBRACE   2004  //}
#define TOK_PLUS         3000  //+
#define TOK_MINUS        3001  //-
#define TOK_MULTIPLY     3002  //*
#define TOK_DIVIDE       3003  // /
#define TOK_ASSIGN       3004  //:=
#define TOK_EQUALTO      3005  //==
#define TOK_LESSTHAN     3006  //<
#define TOK_GREATERTHAN  3007  //>
#define TOK_NOTEQUALTO   3008  //<>
#define TOK_AND          3009  //and
#define TOK_OR           3010  //or
#define TOK_NOT          3011  //not 
#define TOK_LENGTH       3012  //length 
#define TOK_IDENTIFIER   4000  //identifier
#define TOK_INTLIT       4001  //integer literal 
#define TOK_FLOATLIT     4002  //floating-point literal
#define TOK_STRINGLIT    4003  //string literal 
#define TOK_EOF          5000  // End of File
#define TOK_UNKNOWN      6000  // unknown lexeme

#endif

