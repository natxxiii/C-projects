#include <stdio.h>
//Natalie Aponte
//Activity Package Calculator
/*This is a program that calculates 
the total charge for each of hour three packages.*/

int main(){

//declaring each variable
	int total;
	int hours;
	int guests;
	int package;

//asks user to select from three packages. Any other number will be invalid.
	printf("Please select from three packages: 1, 2, and 3 \n");
	printf("Enter package selection:");
	scanf("%d" , &package);

//if user selects package 1
	if(package == 1){

//asks user to enter number of hours
		printf("Enter hours:");
		scanf("%d" , &hours);

//if user enters valid hour input		
		if(hours>=1 && hours<=4){
	
//asks user to enter number of guests			
			printf("Enter the number of guests: ");
			scanf("%d" , &guests);

//if user enters valid number of guests
			if(guests>=5 && guests<=20){

//calculates the users total
				hours = hours - 1;
				total = 150 + (hours*100) + (guests*25);

//if the total is less than or equal to the max charge for package 1, print users total
				if(total<=595){

				printf("Charge($):%d" , total);
				}
//if total calculated is greater than the max charge, total will be set to the max and will print users total
				else{
					total = 595;
					printf("Charge($):%d" , total); 
				}
				}
//if user enters invalid number of guests
			else{
				printf("Invalid number of guests.");
				}
			}
//if user enters invalid number of hours
		else{
			printf("Invalid hours.");
			}
		}
//if user selects package 2
	else if(package == 2){

//user will enter number of hours
                printf("Enter hours:");
                scanf("%d" , &hours);

//validates if user entered valid number of hours
                if(hours>=1 && hours<=4){

//user will enter number of guests
                        printf("Enter the number of guests: ");
                        scanf("%d" , &guests);

//validates if user entered valid number of guests
                        if(guests>=8 && guests<=30){
				hours = hours - 1;
//calculates users total for package 2
                                total = 180 + (hours*120) + (guests*22);
                   
//checks if users total is less than or equal to the max charge for package 2

                                if(total<=850){

                                printf("Charge($):%d" , total);
				}
//if charge is greater than the max for package 2, total will automatically be set to 850 and will print 
                                else{
                                     	total = 850;
                                        printf("Charge($):%d" , total);
				}
				}
//if user entered invalid number of guests, program will tell them
			else{
				printf("Invalid number of guests.");
				}
			}
//user enters invalid number of hours
		else{
			printf("Invalid hours.");
			}
		}
//if user selects package 3
	else if(package == 3){

//asks user to enter hours     
                printf("Enter hours:");
                scanf("%d" , &hours);

//validates if hours is valid
                if(hours>=1 && hours<=4){

//asks user to enter number of guests
                        printf("Enter the number of guests: ");
                        scanf("%d" , &guests);

//validates if guests input is valid
                        if(guests>=10 && guests<=40){
				hours = hours - 1;

//calculates users total for package 3
                                total = 200 + (hours*150) + (guests*20);
                              
//if their total is less than or equal to the max, total will print
                                if(total<=1050){

                                printf("Charge($):%d" , total);
				}
//if their total is greater than the max, total will be set to max and print
                                else{
                                     	total = 1050;
                                        printf("Charge($):%d" , total);
				}
				}
//user enters invalid number of guests 
                       else{
                            	printf("Invalid number of guests.");
				}
			}
//user enters invalid number of hours
                else{
                    	printf("Invalid hours.");
			}
		}
//user selects invalid package selection
	else{
		printf("Invalid selection.");
		}
	return 0;
	}
