// c function
#include <stdio.h>
#include <math.h>
int sum(int x, int y, int z);
int multiplication( int a, int b);
int main()
{
	int x, y, z, a,b,c;
	printf("enter 3 values: ");
	scanf("%d%d%d", &a,&b,&c);
	
	x = sum(a,b,c);
	y = sum(300,200,400);
	z = multiplication(a,c);
	
	printf("the sum %d\n", x);
	printf("the 2nd sum is %d\n", z);
	printf("the multiplication is %d\n", y);
	return 0;
}
int sum (int x, int y, int z){
	int result;
	result = x+y+z;
	return result;
}
int multiplication(int a, int b){
	int result;
	result =(a*b);
	return result;
}  
