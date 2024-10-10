// calculating electric bill
#include <stdio.h>
int main()
{
	int customer_id, unitsconsumed;
	char customer_name [40];
	float charge_per_unit, total_bill, surcharge = 0;
	
	printf("enter customer_id: ");
	scanf("%d",&customer_id);
	
	printf("enter customer_name: ");
	scanf("%s",customer_name);
	
	printf("enter unitsconsumed: ");
	scanf("%d",&unitsconsumed);
	
	if(unitsconsumed<=199){
		charge_per_unit = 1.20;
	}
	else if(unitsconsumed>=200 && unitsconsumed<400){
		charge_per_unit = 1.50;}
    else if(unitsconsumed>=400 && unitsconsumed<600)
		{charge_per_unit = 1.80;}
			else
			{charge_per_unit = 2.00;}
				total_bill =(unitsconsumed*charge_per_unit);
				if(total_bill>400){
					surcharge=(total_bill*0.15);}
				
					if(total_bill<100){total_bill=100;}
						else{total_bill+=surcharge;}
							printf("customer_id: %d\n", customer_id);
							printf("customer_name: %s\n", customer_name);
							printf("unitsconsumed: %d\n", unitsconsumed);
							printf("charge_per_unit: %.2f\n", charge_per_unit);
							printf("total_bill: %.2f\n", total_bill);
								return 0;
}