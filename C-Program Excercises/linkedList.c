/*
  O'Neal Yako
  Thursday, February 14, 2019
*/

/*
 * This program is used for teachers so they can manage their student class list.
 * The user is able to add, remove, and view enrolled students in the class.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Global Variables
struct node* head;

typedef struct node
{
  int student_ID;
  struct node *next;

}classList;

// This function adds a student ID to class list
void insert(int studentID)
{
  classList * temp = malloc(sizeof(struct node));
  temp->student_ID = studentID;
  temp->next = head;
  head = temp;
}

// This function removes a student ID from class list
void popStud(int studentID)
{
  classList *temp;

  if (head == NULL)
  {
    printf("No students are enrolled in the class yet.\n");
  }

  temp = head;
  head = head->next;
}

// This function prints all students enrolled in class
void printList()
{
  classList *temp = head;
  if (temp == NULL)
  {
    printf("\t*** Students Enrolled in Class ***\n");
    printf("\t\t*** EMPTY ***\n");
  }

  else
  {
    printf("\t\n*** Students Enrolled in Class ***\n");
  }

  while (temp != NULL)
  {
    printf("\nStudent(s) ID(s): %d\n", temp->student_ID);
    temp = temp->next;
  }
}

// This function displays output selection for user.
int main ()
{
  int userInput = 0;
  int studentID;


  // The program will function until user selects 5 which will then exit program.
  while (userInput != 5)
  {
    printf("\n\nWelcome to the Student Class Tool!\n");

    printf("Please select an option you would like to perform below... \n\n");
    printf("1. How to use class tool\n");
    printf("2. Add a student (Use Student ID)\n");
    printf("3. Remove a student (Use Student ID)\n");
    printf("4. View students enrolled in your class\n");
    printf("5. Exit program\n");

    printf("ENTER CHOICE:  ");
    scanf("%d", &userInput);

    printf("Please select an option you would like to perform. \n\n");
    printf("1. How to use class tool\n");
    printf("2. Add a student (Use Student ID)\n");
    printf("3. Remove a student (Use Student ID)\n");
    printf("4. View students enrolled in your class\n");
    printf("5. Exit program\n");

    if (userInput == 1)
    {
      printf("\n\t\t***HOW TO WORK STUDENT CLASS TOOL***\n");
      printf("\t1. Select an option.\n");
      printf("\t2. Enter Student ID to add/remove and or view students.\n");
      printf("\t3. Enjoy the program!\n");
    }

    if (userInput == 2)
    {
      printf("\nAdd Student ID: ");
      scanf("%d", &studentID);

      insert(studentID);
    }

    if (userInput == 3)
    {
      printf("\nRemove Student ID: ");
      scanf("%d", &studentID);

      popStud(studentID);
    }

    if (userInput == 4)
    {
      printList();
    }
    if (userInput == 5)
    {
      printf("Program exited.\n");
    }

    if ((userInput < 1) || (userInput > 5))
    {
      printf("INVALID CHOICE\n");
    }

  }

  return 0;
}
