

	
// C program for water bill calculator
/*
Name: Ndungu Francis  
Reg: CT100/G/26209/25  
Description: A Water bill calculator that prompts user to enter units consumed then calculates their bill  
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt the user to enter their units consumed
    printf("Enter Units Of Water Consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on the units consumed
    if (units <= 30) {
        bill = units * 20;
    }
    else if (units > 30 && units <= 60) {
        bill = units * 25;
    }
    else {
        bill = units * 30;
    }

    // Display total bill
    printf("Total Water Bill: %.2f KES\n", bill);

    return 0;
}