#include<stdio.h>

/* This program will ask a student for their grades. It will then let them know whether that is good or not*/

int main(void)
{
  float gradeOne, gradeTwo, gradeThree, gradeFour;
  float average;
  int userSelect;

  /* Prompt the user to enter their grade */
  printf("Enter Grades for Semester 1 (max: 4 courses): \n");
  scanf("%f,%f,%f,%f", &gradeOne, &gradeTwo, &gradeThree, &gradeFour);

  average = (gradeOne + gradeTwo + gradeThree + gradeFour) / 4;

  printf("Your average is: %.2f\n", average);

  /* This will showcase the following programs the student can apply to depending on their average */

  if (average >= 80)
  {
    printf("Congrats! You can apply to the following programs at the University of Guelph:\n");
    printf("•Software Engineering\n");
    printf("•Law and Criminal Justice\n");
    printf("•Doctorate/Medical\n");
    printf("•Engineering\n");

    /* The user can select which program they will be participating in. They will be prompted to type 1, 2, 3, 4 depending on what they wish to pursue */
    printf("Please select which major you would like to pursue at the university. Type: 1-S.Eng, 2-Law, 3-Doc, 4-Eng\n");
    scanf("%d", &userSelect);
    if (userSelect == 1)
    {
      printf("Welcome to Software Engineering at the University of Guelph!\n");

      printf("Please Enter Name: \n"); 
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n\n");
    }
    if (userSelect == 2)
    {
      printf("Welcome to Law and Criminal Justice at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }
    if (userSelect == 3)
    {
      printf("Welcome to Doctorate/Medical at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }
    if (userSelect == 4)
    {
      printf("Welcome to Engineering at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }


  }
  if ((average > 70) && (average < 80))
  {
    printf("You can apply to the following programs at the University of Guelph:\n");
    printf("•Arts\n");
    printf("•Business & Commerce\n");
    printf("•Tourism\n");
    printf("•Zoology\n");

    /* The user can select which program they will be participating in. They will be prompted to type 1, 2, 3, 4 depending on what they wish to pursue */
    printf("Please select which major you would like to pursue at the university. Type: 1-Arts, 2-BUS, 3-TOUR, 4-ZOO\n");
    scanf("%d", &userSelect);
    if (userSelect == 1)
    {
      printf("Welcome to Arts at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n\n");
    }
    if (userSelect == 2)
    {
      printf("Welcome to Business & Commerce at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }
    if (userSelect == 3)
    {
      printf("Welcome to Tourism at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }
    if (userSelect == 4)
    {
      printf("Welcome to Zoology at the University of Guelph!\n");
      printf("If you want more information, visit the university website. Please note, for applying, you must have your OUAC ready! Good luck.\n");
    }
  }
  if (average < 70)
  {
    printf("Your average is too low. Thank you for considering the University of Guelph. Bye.\n");
  }

  return 0;
}
