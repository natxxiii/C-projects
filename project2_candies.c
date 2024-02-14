#include <stdio.h>

int main(){
//declares variables	
	int coins;
	int total_coins = 0;
	int choice;
   int candyPrice;
   int candyPrice1 = 15;
   int candyPrice2 = 25;
   int candyPrice3 = 50;
	do{

		printf("Insert coins: ");
		scanf("%d" , &coins);
		total_coins = total_coins + coins;
		
	}while(coins!=0);//keeps telling user to insert coins until user enters 0
	

	printf("1 - Hershey's kisses (15 cents), 2 - Reese's Peanut Butter Cups  (25 cents), 3 - Snickers (50 cents)\n");
	printf("Enter your choice:");//tells user to select a candy choice
	scanf("%d" , &choice);	
	if(choice >=1 && choice <= 3){	//if user enters a valid choice it validates if user has enough funds
		
      if (choice == 1){// if user selects choice 1 the price becomes 15 cents
      
         candyPrice = candyPrice1;
      }
      else if(choice == 2){
         candyPrice = candyPrice2;// if user selects choice 2 the price becomes 25 cents
      }
      else if(choice == 3){
         candyPrice = candyPrice3;// if user selects choice 1 the price becomes 50 cents
      }
		if(total_coins >= candyPrice){
			total_coins -= candyPrice;
			printf("Your change is %d cents", total_coins); //if user has enough money code prints users change
		}else{
			printf("Insufficient amount, %d cents returned", total_coins);//if user didn't enter enough money the change is returned
}
	}else{
		printf("Invalid selection, %d cents returned", total_coins);//if user enters invalid selection, change is returned
}
	return 0;

}
