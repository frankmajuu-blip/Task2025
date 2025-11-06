/*
NAME: NDUNGU FRANCIS
REG: CT100/G/26209/25
DESCRIPTION: A C program that reads sales transactions from a text file
named sales.txt and calculates the total sales for the day.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    float amount; 
	float total = 0;
    // Open the file in read mode
    fptr = fopen("sales.txt", "r");
    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    // Read each transaction and sum up the total
    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }
    // Display total sales
    printf("Total Sales for the Day: %.f\n", total);
    // Close the file
    fclose(fptr);
    
    return 0;
}

