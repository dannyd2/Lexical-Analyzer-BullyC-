## Example Lexical Analyzer Using Flex

Flex is a tool for generating scanners. A scanner, sometimes called a tokenizer, is a program that recognizes lexical
patterns in text. The flex program reads user-specified input files for a description of a scanner to generate. It is
traditional to end this file with “.l”, for example rules.l . (The “l” stands for “lex”, the name of the original
Unix tool. Flex is the open-source replacement. Flex also uses a new algorithm that is much faster than the
original lex.) The description is in the form of pairs of regular expressions and C code, called rules. Flex generates
a C source file named lex.yy.c , which defines the function yylex() . The file lex.yy.c can be compiled and
linked to produce an executable. When the executable is run, it analyzes its input for occurrences of text matching
the regular expressions for each rule. Whenever it finds a match, it executes the corresponding C code

An identifier is defined by <letter> { <letter> | <digit> | _ }, where <letter> is any upper‐ or
lowercase letter in the English alphabet, <digit> is any numeral 0..9, and _ is the underscore character.
Therefore, this_is_an_identifier is a valid identifier whereas _this_is_not and 1more_bad_example are
not a valid identifiers. Identifiers may not be keywords, however case is significant and keywords are always
composed of lowercase characters. An identifier ends when a character that is not legal for an identifier is
encountered.

An integer literal consists of a sequence of digits without a decimal point.

A floating point literal is a sequence of digits containing an embedded decimal point, or ending with a
decimal point.