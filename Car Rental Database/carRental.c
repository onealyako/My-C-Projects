/*
 O'Neal Yako
 1003370
 Tuesday, October 9, 2018
 A2, Q1
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Global Variables*/
struct node* head; /* Global variable head for available for rent cars*/
struct node2* head_nodeTwo; /*Global variable head for the rented list*/
struct node3* head_nodeThree; /*Global variable head for the repair list*/

/* This structure is for the available for rent cars */
typedef struct node
{
    int mileage;
    char plateNum[8];
    struct node *next;
}new_car;

/*This structure is rented list */
typedef struct node2
{
    int expectedDate;
    struct node2 *next;
}rented;

/* this structure is repair list */
typedef struct node3
{
    int mileage_repairList;
    char plateNum_repairList[8];
    struct node3 *next;
}repair;

/* This is for adding a new car to available for rent list */
void insert(int carMileage, char carPlate[8])
{
    new_car * temp = malloc(sizeof(struct node));
    temp->mileage = carMileage;
    strcpy(temp->plateNum, carPlate);
    temp->next = head;
    head = temp;
}

/* This is for inserting (adding a car) to the rented list */
void insertRented(int returnDate)
{
    rented * temp = malloc(sizeof(struct node2));
    temp->expectedDate = returnDate;
    temp->next = head_nodeTwo;
    head_nodeTwo = temp;
}

/* This is for inserting a car into the repair list */
void insertRepair(int carMileage, char carPlate[8])
{
    repair * temp = malloc(sizeof(struct node));
    temp->mileage_repairList = carMileage;
    strcpy(temp->plateNum_repairList, carPlate);
    temp->next = head_nodeThree;
    head_nodeThree = temp;
}

/*This prints when a new car was added to available for rent list.*/
void print_addCar()
{
    new_car * temp = head;
    new_car * temp2 = head;
    printf("A new car was added to the available-for-rent list\n");
    
    printf("The new car's plate number is: %s\n", temp2->plateNum);
    printf("The new car's mileage is: %d\n", temp->mileage);
    
    printf("\n");

}
/*This function computes the transaction charge when user inputs 2 and returns the car to available*/
void print_transaction()
{
    new_car * temp = head;
    float paymentDue;
    
    printf("*** RECEIPT ***\n");
    printf("• a flat rate of $40.00 for up to 100 km\n");
    printf("• 15 cents per km for the additional kilometers\n\n");
    
    if (temp->mileage <= 100)
    {
        printf("Payment Due: $40.00\n");
    }
    
    else
    {
        paymentDue = ((temp->mileage * 0.15) + 40.00) - 15.00;
        printf("Payment Due: $%.2f\n", paymentDue);
    }
}

/* This function pushes the new car to the available for rent list */
void pushCar(int newCarMileage, char newPlates[8])
{
    new_car *temp = malloc(sizeof(struct node));
    temp->mileage = newCarMileage;
    strcpy(temp->plateNum,newPlates);
    temp->next = head;
}

/* This function pushes the returned car to the available for rent list if user inputs 3*/
void pushCar_repairList(int newCarMileage, char newPlates[8])
{
    repair *temp = malloc(sizeof(struct node3));
    temp->mileage_repairList = newCarMileage;
    strcpy(temp->plateNum_repairList,newPlates);
    temp->next = head_nodeThree;
}
/*
void deleteCar_repairList(char newPlates[8])
{
    repair *temp = head_nodeThree;
    if (newPlates == 1)
    {
        head_nodeThree = temp->next;
        free(temp);
        return;
    }
    int i;
    for (i=0; i<newPlates - 2; i++)
    {
        temp = temp->next;
    }
    
    repair *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}
 */

/* This funciton pops a car out of the available list */
void popCar_availableList(int carMileage, char newPlates[8])
{
    new_car *temp;
    /*rented *temp2;*/
    
    if (head == NULL)
    {
        printf("There are no cars available.\n");
    }
    
    temp = head;
    head = head->next;
    
    
    /*free(temp);*/
}

/* This function displays a message to the user when the user rents a car */
void print_rentedCar()
{
    
    /*rented * temp = head_nodeTwo;*/
    printf("The first available car was rented.\n");
    
    
    /*
    while (temp != NULL)
    {
        printf("%d", temp->expectedDate);
        temp = temp->next;
    }
     */
}

/* This function displays a message to the user notifying them that a returned
 * car was added to the repair list. It also shows them the car added
*/
void print_repairList()
{
    repair * temp = head_nodeThree;
    repair * temp2 = head_nodeThree;
    
    printf("A returned car was added to the Repair List.\n");
    
    printf("The car's plate number added to the repair list: %s\n", temp2->plateNum_repairList);
    printf("The car's mileage added to the repair list: %d\n", temp->mileage_repairList);
    
    printf("\n");
}

/* This function prints the list information to the user */
void print_allLists()
{
    
    new_car *temp = head;
    rented *temp2 = head_nodeTwo;
    repair *temp3 = head_nodeThree;
    
    
    /*Available-For-Rent List*/
    if (temp == NULL)
    {
        printf("\t*** Available-for-Rent List ***\n");
        printf("\t*** EMPTY ***\n");
    }
    else
    {
        printf("\t*** Available-for-Rent List ***\n");
    }
    
    while (temp != NULL)
    {
        printf("Plate Number: %s, Car Mileage: %d\n", temp->plateNum, temp->mileage);
        temp = temp->next;
    }

    /*Rented List*/
    if (temp2 == NULL)
    {
        printf("\t*** Rented List ***\n");
        printf("\t*** EMPTY ***\n");
    }
    
    else
    {
        printf("\t*** Rented List ***\n");
    }
    while (temp2 != NULL)
    {
        printf("Expected Return Date: %d\n", temp2->expectedDate);
        temp2 = temp2->next;
    }
    
    /*Repair List*/
    if (temp3 == NULL)
    {
        printf("\t*** Repair List *** \n");
        printf("\t*** EMPTY ***\n");
    }
    else
    {
        printf("\t*** Repair List *** \n");
    }
    
    while (temp3 != NULL)
    {
        printf("Plate Number: %s, Car Mileage: %d\n", temp3->plateNum_repairList, temp3->mileage_repairList);
        temp3 = temp3->next;
    }
    
}

/* This function takes in the user input */
void userInputFunct()
{
    int userInput = 0;
    int carMileage = 0;
    char carPlate[8];
    int returnDate = 0;
    head = NULL;
    head_nodeTwo = NULL;

    while (userInput != 7)
    {
        printf("\nPlease proceed by choosing an option below: \n");
        printf("1. add a new car to the available -for-rent list\n");
        printf("2. add a returned car to the available-for-rent list\n");
        printf("3. add a returned car to the repair list\n");
        printf("4. transfer a car from the repair list to the available-for-rent list\n");
        printf("5. rent the first available car\n");
        printf("6. print all the lists\n");
        printf("7. quit\n\n");
        
        printf("ENTER CHOICE: ");
        scanf("%d", &userInput);

        if (userInput == 1)
        {
            printf("Enter car plate number: \n");
            scanf("%s", carPlate);
            printf("Enter car mileage: \n");
            scanf("%d", &carMileage);

            insert (carMileage, carPlate);
            print_addCar();

        }

        if (userInput == 2)
        {
            printf("Enter car plate number: \n");
            scanf("%s", carPlate);
            printf("Enter car mileage: \n");
            scanf("%d", &carMileage);
            
            insert (carMileage, carPlate);
            print_addCar();
            print_transaction();
            /*insert_returnedCar(car )*/
        }

        if (userInput == 3)
        {
            printf("Enter car plate number: \n");
            scanf("%s", carPlate);
            printf("Enter car mileage: \n");
            scanf("%d", &carMileage);
            
            insertRepair(carMileage, carPlate);
            print_repairList();
        }

        if (userInput == 4)
        {
            printf("Enter car plate number: \n");
            scanf("%s", carPlate);
            
            
            
            
        }

        if (userInput == 5)
        {
            printf("Enter expected return date(yymmdd): \n");
            scanf("%d", &returnDate);

            insertRented(returnDate);
            print_rentedCar();
            
        }
        
        if (userInput == 6)
        {
            print_allLists();
        }
        
        if (userInput>7 || userInput<=0)
        {
            printf("Invalid transaction code.\n");
        }
    }


}
/*
struct new_car* readFile_newCar(struct new_car * carsAvailable)
{
    FILE *fPtr;
    fPtr = fopen("carsAvailable.txt", "r");
    
    char *item;
    char line[300];
    
    while(fgets(line, 299, fPtr))
    {
        item = strtok(line, ",");
        strcpy(
    }
}
*/
int main()
{
    userInputFunct(); /* Calls the function that prompts the user for input */
   
    return 0;
}
