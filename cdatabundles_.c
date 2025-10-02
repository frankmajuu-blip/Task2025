

// A C program for mobile data bundles
/*
Name: Ndungu Francis  
Reg: CT100/G/26209/25  
Description: A C program using switch statement to display the selected bundle
*/

#include <stdio.h>

int main() {
    int choice;  // Declare the variable to store user's choice

    // Data purchasing display menu
    printf("Mobile Data Bundles:\n");
    printf("1. 100MB - 50 KES\n");
    printf("2. 500MB - 200 KES\n");
    printf("3. 1GB - 350 KES\n");
    printf("4. 2GB - 600 KES\n");

    // Ask the user to enter a choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Determine the bundle choice using a switch statement
    switch (choice) {
        case 1:
            printf("You selected: 100MB - 50 KES\n");
            break;
        case 2:
            printf("You selected: 500MB - 200 KES\n");
            break;
        case 3:
            printf("You selected: 1GB - 350 KES\n");
            break;
        case 4:
            printf("You selected: 2GB - 600 KES\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
