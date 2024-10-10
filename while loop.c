// while loop output numbers 1-35
#include <stdio.h>
int main()
{
	int t =1, sum = 0,sumofcubes = 0;
	while(t<36) {
		sum +=t;
		sumofcubes +=t*t*t;
		printf("%d\t%d\n", t, t*t*t);
		t++;
	} 
	printf("\nsumofnumbers:%d\n", sum);
	printf("sumofcubes:%d\n",sumofcubes);
	
	
	return 0;
}