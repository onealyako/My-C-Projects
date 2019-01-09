O'Neal Yako
1003370
Sunday, October 14, 2018 
Assignment 2 

How to Use:
	- Use the makefile to compile both programs
	- Use 'make all' to create q1 & q2
*********
Question 1
*********
	- This programs (./q1) displays the menu options for a CarRental service provider. 
	
Output will first be the menu:
	

Please proceed by choosing an option below: 
1. add a new car to the available -for-rent list
2. add a returned car to the available-for-rent list
3. add a returned car to the repair list
4. transfer a car from the repair list to the available-for-rent list
5. rent the first available car
6. print all the lists
7. quit

If user choice is 1:
**********
ENTER CHOICE: 1
Enter car plate number: 
John
Enter car mileage: 
1234
A new car was added to the available-for-rent list
The new car's plate number is: John
The new car's mileage is: 1234
**********

If user choice is 2:
**********
ENTER CHOICE: 2
Enter car plate number: 
Party
Enter car mileage: 
87233
A new car was added to the available-for-rent list
The new car's plate number is: Party
The new car's mileage is: 87233

*** RECEIPT ***
• a flat rate of $40.00 for up to 100 km
• 15 cents per km for the additional kilometers

Payment Due: $13109.95
**********

If user choice is 3:
**********
ENTER CHOICE: 3
Enter car plate number: 
Johnnny
Enter car mileage: 
78233
A returned car was added to the Repair List.
The car's plate number added to the repair list: Johnnny
The car's mileage added to the repair list: 78233
**********

If user choice is 4:
**********
ENTER CHOICE: 4
Enter car plate number: 
coco 
**********

If user choice is 5:
**********
ENTER CHOICE: 5
Enter expected return date(yymmdd): 
110806
The first available car was rented.
**********

If user choice is 6:
**********
ENTER CHOICE: 6
	*** Available-for-Rent List ***
Plate Number: Party, Car Mileage: 87233
Plate Number: John, Car Mileage: 1234
	*** Rented List ***
Expected Return Date: 110806
	*** Repair List *** 
Plate Number: Johnnny, Car Mileage: 78233
**********

If user choice is 7:
**********
Program exits. 
**********


*********
Question 2
*********
	- This program is ./q2 displays the solution to a postfix expression that is provided by the user.

Sample Output:
**********
Enter Postfix Expression: 
13+

The postfix result is: 4
**********
