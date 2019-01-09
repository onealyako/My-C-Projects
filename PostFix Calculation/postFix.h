/*
 *O'Neal Yako
 *1003370
 *Tuesday, October 9, 2018
 *A2, Q2
 */

#ifndef q2_H_INCLUDED
#define q2_H_INCLUDED

/* Function Prototypes */

typedef struct stack
{
    int data[30];
    int top;
}stack;

void push(stack *s, char expr);

int pop (stack *s);

int performEval(int operand1, int operand2, char operator);

void userInputFunct();

int main();
