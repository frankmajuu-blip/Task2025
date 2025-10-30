/*
Name: NDUNGU FRANCIS
Reg: CT100/G/26209/25
Description: 
A C program to calculate total and average weekly revenue using a 1D array.
*/

#include <stdio.h>

int weeklyRevenue() {
    int revenue[7];
    int i;
    int total=0;

    // Input revenue for 7 days
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];
    }

    // Display total and average
    printf("\nTotal Weekly Revenue = %d", total);
    printf("\nAverage Daily Revenue = %d\n", total / 7);

    return total;
}

int main() {
    int total = weeklyRevenue();  // call the function
    printf("\n(From main) Total Revenue: %d\n", total);
    return 0;
}
