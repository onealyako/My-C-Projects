#include<stdio.h>

void userInterface();

void userInterface()
{
  int userInput=0;
  int province_select;
  int itemCost;
  float subTotal;
  float totalCost;

    printf("\tWelcome to the Tax Calculator!\n");
    printf("Select country: 1. Canada \t2. United States\n");
    scanf("%d",&userInput);

    if (userInput == 1)
    {
      printf("CANADA: Please choose province. \n");

      printf("1. Ontario\n");
      printf("2. Alberta\n");
      printf("3. Saskatchewan\n");
      printf("4. British Columbia\n");
      printf("5. Manitoba\n");
      printf("6. Quebec\n");
      printf("7. Nova Scotia\n");
      printf("8. Newfoundland and Labrador\n");
      printf("9. PEI\n");
      printf("10. New Brunswick\n");

      scanf("%d",&province_select);
      if (province_select == 1)
      {
        printf("Ontario Sales Tax Rate: 13%%\n");
        printf("Enter cost of item: $");
        scanf("%d",&itemCost);

        subTotal = itemCost * 0.13;

        printf("Tax to be added: $%.2f \n",subTotal);
        totalCost = itemCost * 1.13;
        printf("Total Cost (inc. tax): $%.2f\n", totalCost);

      }
    }
    else
    {
      //printf("USA TEST");
      printf("1. Michigan\n");
      printf("2. California\n");
      printf("3. New York\n");
      printf("4. Florida\n");
      printf("5. Texas\n");
      printf("6. North Carolina\n");
      printf("7. South Carolina\n");
      printf("8. Washington\n");
      printf("9. Oregon\n");
      printf("10. Nevada\n");
      printf("11. Arizona\n");
      printf("12. Idaho\n");
      printf("13. Utah\n");
      printf("14. Montana\n");
      printf("15. New Mexico\n");
      printf("16. Wyoming\n");
      printf("17. Colorado\n");
      printf("18. North Dakota\n");
      printf("19. South Dakota\n");
      printf("20. Nebraska\n");
      printf("21. Kansas\n");
      printf("22. Oklahoma\n");
      printf("23. Texas\n");
      printf("24. Minnesota\n");
      printf("25. Iowa\n");
      printf("26. Missouri\n");
      printf("27. Arkansas\n");
      printf("28. Louisiana\n");
      printf("29. Wisconsin\n");
      printf("30. Illinois\n");
      printf("31. Tennessee\n");
      printf("32. Mississippi\n");
      printf("33. Indiana\n");
      printf("34. Alabama\n");
      printf("35. Ohio\n");
      printf("36. Georgia\n");
      printf("37. Virginia\n");
      printf("38. West Virginia\n");
      printf("39. Pennsylvania\n");
      printf("40. Rhode Island\n");
      printf("41. Connecticut\n");
      printf("42. New Jersey\n");
      printf("43. Delaware\n");
      printf("44. Maryland\n");
      printf("45. Massachusetts\n");
      printf("46. Maine\n");
      printf("47. Hawaii\n");
      printf("48. Alaska\n");
      printf("49. New Hampshire\n");
      printf("50. Vermont\n");

    }





}

int main()
{
    userInterface();
}
