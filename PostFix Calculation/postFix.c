/*
 O'Neal Yako
 1003370
 Tuesday, October 9, 2018
 A2, Q2
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct stack
{
    int data[50];
    int top;
}stack;

void init(stack *s)
{
    s->top = -1;
}

void push(stack *s, char expr)
{
    if (s->top == 49)
    {
        printf("ERROR: Cannot push.\n");
    }
    else
    {
        s->top++;
        s->data[s->top] = expr;
    }
}

int pop (stack *s)
{
    char expr;
    
    if (s->top == -1)
    {
        printf("ERROR: Stack is empty or you may be trying to insert a character. Try again.\n");
        return '\0';
    }
    else
    {
        expr = s->data[s->top];
        s->top--;
        return expr;
    }
}

/* This functions performs an operation and returns output */
int performEval(int operand1, int operand2, char operator)
{
    if (operator == '+')
    {
        return operand1+operand2;
    }
    if (operator == '-')
    {
        return operand1-operand2;
    }
    if (operator == '*')
    {
        return operand1*operand2;
    }
    if (operator == '/')
    {
        return operand1/operand2;
    }
    
    return 0;
}

/*void display(stack *s)
{
    int i = 0;
    for (i=0; i <= s->top; i++)
    {
        printf("%c\t", s->data[i]);
    }
}
 */

void userInputFunct()
{
    stack s;
    int i = 0;
    char data;
    int ope = 0;
    int result = 0;
    char expr[50];
    int operand1=0;
    int operand2=0;
    int evaluate;
    
    /* Prompt user to enter postfix expression */
    printf("Enter Postfix Expression: \n");
    scanf("%s", expr);
    
    init(&s);
    
    for (i=0; expr[i] != '\0'; i++)
    {
        if ((expr[i] == ' ') || expr[i] == ',')
        {
            continue;
        }
        data = expr[i];
        
        /* Checks if there is a digit in the expression inputted by the user */
        if (isdigit(data))
        {
            ope = data-48;
            push(&s, ope);
        }
        else if ((expr[i] == '+') || (expr[i] == '-') || (expr[i] == '*') || (expr[i] == '/'))
        {
            operand1 = pop(&s);
            operand2 = pop(&s);
            evaluate = performEval(operand1, operand2,data);
            push(&s,evaluate);
        }
    }
    
    result = pop(&s);
   
    /* Result */
    printf("\nThe postfix result is: %d\n", result);
}

int main()
{
    userInputFunct(); /*This prompts user to input postfix exp. */
  
    return 0;
}
