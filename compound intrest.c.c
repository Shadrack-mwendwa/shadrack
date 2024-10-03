//program to find compound intrest
/*
Author:shadrack
Date:
*/
#include <stdio.h>
#include <math.h>
int main(){
   float principal,time,rate,compound_intrest,rate_of_intrest_compounded_annualy,amount;
   printf("enter principal:");
   scanf("%f",&principal);
   
   printf("enter time:");
   scanf("%f",&time);

   printf("enter rate:");
   scanf("%f",&rate);
   
   printf("enter rate_of_intrest_compounded_annualy:");
   scanf("%f",&rate_of_intrest_compounded_annualy);

   amount=(principal*((1+rate/100))*rate_of_intrest_compounded_annualy*time);
   compound_intrest=(amount-principal);
   printf("Amount is:%f\n",amount);
   printf("compound_intrest is:%.2lf\n",compound_intrest);

return 0;
}