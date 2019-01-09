/*  tictactoe.h
    Header file.
    By: O'Neal Yako (oyako@uoguelph.ca)
    Student ID: 1003370
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef TICTACTOE_H
#define TICTACTOE_H


unsigned short b3tous( char b3[10] );
void b3fromus( char b3[10], unsigned short us );
void debug(unsigned short us);
void boardfromb3(char board[60], char b3[10]);
void boardtob3(char board[60], char b3[10]);
char get_move( char b3[10] );
char get_turn( char b3[10] );
char winner( unsigned short us);
unsigned short next ( unsigned short us, char pos );


#endif
