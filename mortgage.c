#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void userInput();
void rate(double r);
void payments(int nPay);
void calcMortgage(double principle, double rate, int n);

void userInput()
{
  //This prompts user to enter their rate
  double userRate=0;
  int numPay=0;
  double princAmount;

  printf("\nWelcome to the Mortgage Calculator!\n");

  printf("\nEnter your interest rate: ");
  scanf("%lf",&userRate);

  printf("\nEnter number of years your loan is: ");
  scanf("%d",&numPay);

  printf("\nEnter principle loan amount: ");
  scanf("%lf",&princAmount);

  rate(userRate);
  payments(numPay);
  calcMortgage(princAmount,1,1);

}

//Converts the annual interest ratet the user inputs into monthly
void rate(double r)
{
  //printf("(TEST)r is: %.2lf\n",r);
  double newRate;
  double monthlyRate;

  monthlyRate = r/12;
  //printf("monthlyRate is: %.2lf\n", monthlyRate);
  newRate = monthlyRate/100;
  //printf("newRate: %.3lf\n", newRate);

  //calcMortgage(newRate,1,1);

  //at very end, we have to pass values of  rate, payments, etc to formula
}

//Calculates number of payments over the length of loan inputted by user
void payments(int nPay)
{
  //Represents the number of payments over loan's lifetime
  int* numPays=0;

  numPays = nPay*12;
  printf("You will make %d payments over %d years.\n",numPays,nPay);
  //calcMortgage(&numPays,1,1);
}

void calcMortgage(double principle, double rate, int n)
{
  double M; //monthly mortgage payment
  double topExpr;
  double bottomExpr;

  topExpr = pow((1+rate),n);
  printf("TOp TEst: %lf\n",topExpr);

  bottomExpr = pow((1+rate),n) -1;
  printf("Bottom test: %lf\n",bottomExpr);


}


int main()
{
  userInput();
  return 0;
}
