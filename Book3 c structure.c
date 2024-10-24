// C structure program
#include <stdio.h>// printf(),scanf()
#include <string.h>//strcpy()
//defining the book structure
struct book{
	char title[30];
	char author[30];
	int year_of_publication;
	char ISBN[13];
	float price;
	}book3;
	int main()
	{
		//declaration and initilazation of book3 values
		
		strcpy(book3.title, "c programming");
		strcpy(book3.author, "lucky");
		book3.year_of_publication = 2018;
		strcpy(book3.ISBN, "1234567890986");
		book3.price = 49.99;
		
		//printf output for the declared bookvalues
		
        printf(" Title:%s\n", book3.title);
		printf(" Author:%s\n", book3.author);
		printf(" Year_of_publication:%d\n", book3.year_of_publication);
		printf(" ISBN:%s\n", book3.ISBN);
		printf(" Price:%.2f\n", book3.price);
		
		
		
		return 0;
	}
	








