//program to find simple_intrest
/*
Author:shadrack
Date:09/22/2024
*/
#include <stdio.h>
int main(){
	int principal,rate,time;
	printf("enter principal:");
	scanf("%d",&principal);
	printf("enter rate:");
	scanf("%d",&rate);
	printf("enter time:");
	scanf("%d",&time);
	 //how to calculate simple intrest
	 float simple_intrest=(principal*rate*time)/100;
	 printf("the simple_intrest is:%f\n",simple_intrest);
	
	return 0;
}

