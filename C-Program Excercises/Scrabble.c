// O'Neal Yako

#include<stdio.h>
#include<ctype.h>

/* This SCRABBLE Crossword Game allows players to enter any letters.
 * Each letter has its unique score.
 */

int main(void)
{
  /* Declare variables */
  char userInput;
  int sum = 0;

  /* Prompt the user to enter a word */
  printf("Enter a word: \n");

  /* Loop until newline */
  while((userInput = getchar()) != '\n')
  {
    switch (toupper (userInput))
    {
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
      sum = sum + 1;
      break;

      case 'D': case 'G':
      sum = sum + 2;
      break;

      case 'B': case 'C': case 'M': case 'P':
      sum = sum + 3;
      break;

      case 'F': case 'H': case 'V': case 'W': case 'Y':
      sum = sum + 4;
      break;

      case 'K':
      sum = sum + 5;
      break;

      case 'J': case 'X':
      sum = sum + 8;
      break;

      case 'Q': case 'Z':
      sum = sum + 10;
      break;

      default:
          putchar(userInput);
    }
  }
  /* Display Scrabble score to user */
  printf("Scrabble Value: %d\n", sum);

  printf("\n");

  return 0;
}
