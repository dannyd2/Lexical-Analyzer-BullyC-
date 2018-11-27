/******************************************************************* 
purpose: Programming Assignment 1 (CSE 4713 / 6713)
         flex rules to recognize BullyC lexemes
created: 01/24/2018
 author: Daniel Dover 
 
 You will need to modify this file.
 
 *******************************************************************/
%option noyywrap
%{
#include "lexer.h"

// global variable to hold current line number being read
int line_number = 1;

%}

%%
if                     { return TOK_IF; } //Token: 1001
else                   { return TOK_ELSE; } //Token: 1002
for                    { return TOK_FOR; } //Token: 1003
while                  { return TOK_WHILE; } //Token: 1004
print                  { return TOK_PRINT; } //Token: 1005
return                 { return TOK_RETURN; } //Token: 1006
continue               { return TOK_CONTINUE; } //Token: 1007
break                  { return TOK_BREAK; } //Token: 1008
read                   { return TOK_READ; } //Token: 1010
let                    { return TOK_LET; } //Token: 1011

int                    { return TOK_INT; } //Token: 1100
float                  { return TOK_FLOAT; } //Token: 1101
string                 { return TOK_STRING; } //Token: 1102

(a{1}n{1}d{1})         { return TOK_AND; }  //alternative method //Token: 3009
[o][r]                 { return TOK_OR; } //Token: 3010
[n][o][t]              { return TOK_NOT; } //Token: 3011
[l][e][n][g][t][h]     { return TOK_LENGTH; } //Token: 3012

[0-9]+                 { return TOK_INTLIT; } //Token: 4001
-?[0-9]+\.[0-9]*       { return TOK_FLOATLIT; } //Token: 4002
\"([^"])*\"            { return TOK_STRINGLIT; } // Token: 4003
[A-Za-z][0-9_A-Za-z]*   { return TOK_IDENTIFIER; } //Token: 4000



[:][=]    { return TOK_ASSIGN;} //Token: 3004
\+        { return TOK_PLUS; } //Token: 3000
\-        { return TOK_MINUS; } //Token: 3001
\*        { return TOK_MULTIPLY; } //Token: 3002
\/        { return TOK_DIVIDE; } //Token: 3003
[=][=]    { return TOK_EQUALTO; } //Token: 3005
\<        { return TOK_LESSTHAN; } //Token: 3006
\>        { return TOK_GREATERTHAN; } //Token: 3007
[<][>]    { return TOK_NOTEQUALTO; } //Token: 3008





\;        { return TOK_SEMICOLON; } //Token: 2000
\(        { return TOK_OPENPAREN; } //Token: 2001
\)        { return TOK_CLOSEPAREN; } //Token: 2002
\{        { return TOK_OPENBRACE; } //Token: 2003
\}        { return TOK_CLOSEBRACE; } //Token: 2004


 /* Eat any whitespace */

[ \t\r]+             /* nop */
[\n]      { line_number = line_number + 1;}

 /* Found an unknown character */

.         { return TOK_UNKNOWN; }

 /* Recognize end of file */

<<EOF>>   { return TOK_EOF; }


