/*
NAME:NDUNGU FRANCIS
REG:CT100/G/26209/25
DESCRIPTION:A c program that enables a librarian to record borrowed books each dayand stored in 
a text file called borrowed_books.txt.
*/

#include<stdio.h>
#include<stdlib.h>

struct Student{
	char name[50];
	char reg_no[15];
	float marks;
};

int main(){

	FILE *fptr;
	struct Student s;
	//open a file use rb
	fptr=fopen("results.dat","rb");
	//check if opened
	if (fptr==NULL){
		printf("Error opening file!:\n");
		exit(1);
	}
	printf("STUDENTS RESULTS:\n");
	
	while (fread(&s, sizeof(struct Student),1,fptr)==1){
		printf("Name: %s\n", s.name);
		printf("Regisrtration No: %s\n", s.reg_no);
		printf("Total marks: %.f\n", s.marks);
	}
	fclose(fptr);
	return 0;
}
	
	
