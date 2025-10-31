
/*
Name: NDUNGU FRANCIS
Reg: CT100/G/26209/25
Description: A C program to calculate electric bill based on units consumed
*/

#include <stdio.h>

// --- Function Definition ---
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)   // fixed typo: "inits" ? "units"
        bill = (100 * 10) + ((units - 100) * 15);
    else
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);

    return bill;
}

// --- Main Function ---
int main() {
    int units;
    float total;

    // Prompt user for units
    printf("Enter Number Of Units Consumed:\n    ");
    scanf("%d", &units);

    // Calculate total bill using the function
    total = calculateElectricBill(units);

    // Display result
    printf("Total Bill = KSh. %.f\n", total);  // fixed incorrect format and misplaced variable

    return 0;
}

