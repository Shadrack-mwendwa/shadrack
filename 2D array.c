// C arrays - 5

# include<stdio.h>
int main () {
	int i, j;
	int marks[2][3] = {{{40, 56, 60},{64, 74, 80}},
	{{84,86,88},{40,54,60}}};
	 
	for(i=0;i<2;i++)
	for (j=0;j<3;j++)
	{
		printf("marks[%d][%d]= %d \n", i, j,marks[i][j]);
	}
	
	return 0;
}