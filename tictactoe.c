#include "tictactoe.h"
#include <stdlib.h>
#define BASE 3

unsigned short b3tous( char b3[10] )
{
    unsigned short us = 0;
    int i;
    int value = 0;

    for (i = 8; i >= 0; --i)
    {
         us = (b3[i] - '0') * (pow(3, value)) + us;
         ++value;
    }

    return us;
}

void boardfromb3(char board[60], char b3[10])
{
    int index = 0;
    int piece = 0;
    strcpy( board, "   |   |   \n---+---+---\n   |   |   \n---+---+---\n   |   |  ");

    for (piece = 8; piece >= 0; --piece)
    {
        index = ((4 * piece) + 1) + ((piece / 3) * 12);

        switch (b3[piece])
        {
            case '0':
              board[index] = ' ';
              break;
            case '1':
              board[index] = 'O';
              break;
            case '2':
              board[index] = 'X';
              break;
            default:
              fprintf( stderr, "Error: bad value in b3\n" );
              exit(-1);
              break;
        }
    }
}

void boardtob3(char board[60], char b3[10])
{
    int index = 0;
    int piece = 0;
    strcpy( board, "   |   |   \n---+---+---\n   |   |   \n---+---+---\n   |   |  ");

    for (piece = 8; piece >= 0; --piece)
    {
        index = ((4 * piece) + 1) + ((piece / 3) * 12);

        switch (board[index])
        {
              case ' ':
                b3[piece] = '0';
                break;
              case 'O':
                b3[piece] = '1';
                break;
              case 'X':
                b3[piece] = '2';
                break;
                default:
                fprintf( stderr, "Error: bad value in b3\n" );
                exit(-1);
                break;
        }
    }
}

void b3fromus( char b3[10], unsigned short us )
{
      int i = 9;
      b3[i] = '\0';

      if (us == 0)
      {
          for (i = 8; i >= 0; --i)
          {
              b3[i] = '0';
          }
      }

      while (us > 0)
      {
        for (i = 8; i >= 0; --i)
        {
            b3[i] = (us % BASE) + '0';
            us = us/BASE;
        }

      }

}

char get_move( char b3[10] )
{
    int i;
    int spaces = 0;
    int moves = 0;

    for (i = 0; i<=8; ++i)
    {
        if (b3[i] == '0')
        {
            ++spaces;
        }
        else
        {
            ++moves;
        }
    }
    return moves + '0';
}

char get_turn( char b3[10] )
{
    int turn;
    char nextTurn;

    turn = (get_move(b3) - '0');

      if (turn % 2 == 0)
        {
            nextTurn = '2';
        }
        else
        {
            nextTurn = '1';
        }
    return nextTurn;
}

char winner( unsigned short us)
{
    /* Declare variables */
    char b3[10];
    char theWinner;

    b3fromus(b3, us);

    /* Check to see if player (O) won with rows */
    if((b3[0] == '1') && (b3[1] == '1') && (b3[2] == '1'))
    {
        theWinner = '1';
    }
    else if ((b3[3] == '1') && (b3[4] == '1')  && (b3[5] == '1'))
    {
        theWinner = '1';
    }
    else if((b3[6] == '1') && (b3[7] == '1') && (b3[8] == '1'))
    {
        theWinner = '1';
    }

    /* Check to see if player (O) won with columns */
    if((b3[0] == '1') && (b3[3] == '1') && (b3[6] == '1'))
    {
        theWinner = '1';
    }
    else if((b3[1] == '1') && (b3[4] == '1') && (b3[7] == '1'))
    {
        theWinner = '1';
    }
    else if((b3[2] == '1') && (b3[5] == '1') && (b3[8] == '1'))
    {
        theWinner = '1';
    }

    /* Check to see if player (O) won with diagonals */
    if((b3[0] == '1') && (b3[4] == '1') && (b3[8] == '1'))
    {
        theWinner = '1';
    }
    else if ((b3[2] == '1') && (b3[4] == '1') && (b3[6] == '1'))
    {
        theWinner = '1';
    }

    /* Check to see if player (X) won with rows */
    if((b3[0] == '2') && (b3[1] == '2') && (b3[2] == '2'))
    {
        theWinner = '2';
    }
    else if ((b3[3] == '2') && (b3[4] == '2')  && (b3[5] == '2'))
    {
        theWinner = '2';
    }
    else if((b3[6] == '2') && (b3[7] == '2') && (b3[8] == '2'))
    {
        theWinner = '2';
    }

    /* Check to see if player (X) won with columns */
    if((b3[0] == '2') && (b3[3] == '2') && (b3[6] == '2'))
    {
        theWinner = '2';
    }
    else if((b3[1] == '2') && (b3[4] == '2') && (b3[7] == '2'))
    {
        theWinner = '2';
    }
    else if((b3[2] == '2') && (b3[5] == '2') && (b3[8] == '2'))
    {
        theWinner = '2';
    }

    /* Check to see if player (X) won with diagonals */
    if((b3[0] == '2') && (b3[4] == '2') && (b3[8] == '2'))
    {
        theWinner = '2';
    }
    else if ((b3[2] == '2') && (b3[4] == '2') && (b3[6] == '2'))
    {
        theWinner = '2';
    }

    return theWinner;
}

/* unsigned short next ( unsigned short us, char pos )
{

    char b3[10];
    int i;

    b3fromus(b3, us);

    if((b3[i] == '1') || (b3[i] == '2'))
    {
        return 0;
    }

    return 0;
}
*/

void debug(unsigned short us)
{
  
    char b3[10];
    char board[60];

    printf("Board Number %d\n", us);
    b3fromus(b3, us);
    printf("B3 Board: %s\n", b3);
    printf("Board Pic: \n");
    boardfromb3 (board, b3);
    printf("%s\n", board);
    printf("Move = %c\n", get_move(b3));
    printf("Turn = %c\n", get_turn(b3));
    b3fromus(b3, us);
    printf("Winner = %c\n", winner(us));

}
