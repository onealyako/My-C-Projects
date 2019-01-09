/*
 *O'Neal Yako
 *1003370
 *Tuesday, October 9, 2018
 *A2, Q1
*/

#ifndef q1_H_INCLUDED
#define q1_H_INCLUDED

/* Function Prototypes */

/* This structure is for the available for rent cars */
typedef struct node
{
    int mileage;
    char plateNum[8];
    struct node *next;
}new_car;

/* This structure is rented list */
typedef struct node2
{
    int expectedDate;
    struct node2 *next;
}rented;

/* This structure is repair list */
typedef struct node3
{
    int mileage_repairList;
    char plateNum_repairList[8];
    struct node3 *next;
}repair;

/* This is for adding a new car to available for rent list */
void insert(int carMileage, char carPlate[8]);

/* This is for inserting (adding a car) to the rented list */
void insertRented(int returnDate);

/* This is for inserting a car into the repair list */
void insertRepair(int carMileage, char carPlate[8]);

/*This prints when a new car was added to available for rent list.*/
void print_addCar();

/*This function computes the transaction charge when user inputs 2 and returns the car to available*/
void print_transaction();

/* This function pushes the new car to the available for rent list */
void pushCar(int newCarMileage, char newPlates[8]);

/* This function pushes the returned car to the available for rent list if user inputs 3*/
void pushCar_repairList(int newCarMileage, char newPlates[8]);

/* This funciton pops a car out of the available list */
void popCar_availableList(int carMileage, char newPlates[8]);

/* This function displays a message to the user when the user rents a car */
void print_rentedCar();

/* This function displays a message to the user notifying them that a returned
 * car was added to the repair list. It also shows them the car added
*/
void print_repairList();

/* This function prints the list information to the user */
void print_allLists();

/* This function takes in the user input */
void userInputFunct();

int main();

