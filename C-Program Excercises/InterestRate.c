/* This program calculates the interest rate
 * after the user inputs the specifed rate
 * along with the number of years.
 */
 

#include<stdio.h>

#define NUM_RATES (sizeof(value) / sizeof(value[0]))
#define INITIAL_BALANCE 100.00

int main(void)
{
    
  // Declare variables
  int i, low_rate, num_years, year;
  float value[5];

  // Prompt user to enter the desrired interest rate.
  printf("Enter interest rate: \n");
  scanf("%d", &low_rate);

  // Prompt user to enter the number of years.
  printf("Enter number of years: \n");
  scanf("%d", &num_years);

  printf("\nYears");
  for(i = 0; i < NUM_RATES; i++)
  {
    printf("%6d%%", low_rate+i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++)
  {
    printf("%3d     ", year);
    for (i = 0; i < NUM_RATES; i++)
    {
      value[i] += (low_rate+i) / 100.0 * value[i];
      printf("%7.2f", value[i]);
    }
      printf("\n");
  }


  return 0;

}
