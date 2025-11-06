/*
NAME: NDUNGU FRANCIS
REG: CT100/G/26209/25
DESCRIPTION: A C program that reads and displays student records 
stored in a binary file called results.dat.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[15];
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;

    // Open file in read-binary mode
    fptr = fopen("results.dat", "rb");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("STUDENT RESULTS:\n");
    

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, fptr) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.reg_no);
        printf("Total Marks: %.2f\n\n", s.marks);
    }

    fclose(fptr);
    return 0;
}

