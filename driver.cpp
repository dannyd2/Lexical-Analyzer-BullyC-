//*****************************************************************************
// purpose: driver for Programming Assignment 1 (CSE 4/6713)
// created: 01-17-2018
//  author: Joe Crumpton
//
// You do not need to modify this file.
//
//*****************************************************************************
#include <stdio.h>
#include "lexer.h"

extern "C"
{
// Instantiate global variables
extern FILE *yyin;         // input stream
extern FILE *yyout;        // output stream
extern int   yyleng;       // length of current lexeme
extern char *yytext;       // text of current lexeme
extern int   yylex();      // the generated lexical analyzer

extern int line_number;    // current line number of the input
}

// Do the analysis
int main( int argc, char* argv[] )
{
  int token;   // hold each token code

  // Set the input stream
  if (argc > 1) 
  {
    printf("INFO: Using the file %s for input\n", argv[1]);
    yyin = fopen(argv[1], "r");
    if (!yyin)
    {
      printf("   ERROR: input file not found\n");
      return (1);
    }
  }
  else 
  {
    printf("INFO: Using stdin for input, use CTRL-D to end input\n");
    yyin = stdin;
  }

  // Set the output stream
  yyout = stdout;

  // Do the lexical parsing
  token = yylex();
  while( token != TOK_EOF ) 
  {
    // What did we find?
    printf("line: %d, lexeme: |%s|, length: %d, token: %d\n", 
                line_number, yytext, yyleng, token);
    
    // Is it an error?
    if( token == TOK_UNKNOWN )
      printf("   ERROR: unknown token\n");
      
    // Get the next token
    token = yylex();
  }
  
  printf("line: %d, lexeme: |%s|, length: %d, token: %d\n", 
              line_number, yytext, yyleng, token);

  return(0);
}
