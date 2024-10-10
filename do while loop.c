// program to print do while loop

# include <stdio.h>
int main () {
	int u=1, sum=0, sumofsquares=0;
	
	do {
		sum +=u;
		sumofsquares +=u*u;
		
		printf(" %d\t%d\n", u, u*u);
		
		u++;
	}
	while (u<41);
	
	printf("\nsumofnumbers: %d\n", sum);
	printf("sumofsquares: %d\n", sumofsquares);
	
	return 0;
	
}