
/*
Name:NDUNGU FRANCIS
Reg:CT100/G/26209/25
Description:A number guessing game that prompts and correct the user
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secret;
	int guess;
	int attempts=0;
	
	// initialize a random number
	srand(time(0));
	//generate a random number from 1 to 20
	secret=(rand()%20)+1;
	
	printf("Guess the number between 1 and 20:\n");
	
	//repeat untill the users guess is correct
	while (1){
		printf("Enter your guess. ");
		scanf("%d", &guess);
		attempts++; // count how many gueses
		
		if(guess>secret){
			printf("Too high!\n");
		}
		else if (guess<secret){
			printf("Too low!\n");
		}
		else {
			printf("Congratulations! You guessed it in %d attempts\n",attempts);
			break; // exit loop when correct number is guessed
		}
		
	}
	return 0;
	
}

