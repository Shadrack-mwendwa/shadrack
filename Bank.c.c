//a program to find when someone qualify for a loan
/*
Author:shadrack
Date:22/09/2024
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int age;
	float annual_income;
	//prompt the user to enter age
	printf("enter age:");
	 scanf("%d",&age);
	 
	 //prompt the user to enter annual_income
	 	printf("enter annual_income:");
	 scanf("%f",&annual_income);
	 if(age>=21&&annual_income>=21000);{
	 printf("congratulations you qualify for a loan");
	 }
	 if(age<21&&annual_income<21000);
	 {
	 printf("unfortunately, we are not able to offer you a loan at this time");
 }
	
	return 0;
}