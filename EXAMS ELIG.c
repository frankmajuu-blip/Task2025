// a simple c program progect
/*
Name:Ndungu Francis
Reg N.O:CT100/G/26209/25
Description:Exam Eligibility when Condition 
Attendance is >=75%
Average marks>=40
otherwise not Eligible
*/
#include<stdio.h>
int main(){
    float attendance,averagemarks;
    //prompt the student to enter their attendance
    printf("Please Enter your Class Attendance Percentage:");
    scanf("%f",&attendance);
	//prompt the student to their average marks 
	printf("Please Enter your Average Marks:");
	scanf("%f",&averagemarks);
	//check the exam eligibility
	if(attendance>=75&&averagemarks>=40){
		printf("Eligible For Final Exan.\n");
	}else{
		printf("Not Eligible.\n");
	}
	return 0;
}

