#include <stdio.h>  // printf(), scanf()
#include <string.h> // strcpy()

// Defining the book structure
struct book {
    char title[30];
    char author[30];
    int year_of_publication;
    char ISBN[14]; // Size for 13 digits + null terminator
    float price;
} book3;

int main() {
// Prompt the user to enter values
    printf("Enter title: ");
    scanf("%29[^\n]", book3.title); // Read until newline

    printf("Enter author: ");
    scanf(" %[^\n]", book3.author); // Read until newline

    printf("Enter year of publication: ");
    scanf("%d", &book3.year_of_publication);

    printf("Enter ISBN: ");
    scanf("%13s", book3.ISBN); // Limit to 13 characters

    printf("Enter price: ");
    scanf("%f", &book3.price);

    // Print output for the declared book values
    printf("\nTitle: %s\n", book3.title);
    printf("Author: %s\n", book3.author);
    printf("Year of Publication: %d\n", book3.year_of_publication);
    printf("ISBN: %s\n", book3.ISBN);
    printf("Price: %.2f\n", book3.price);

    return 0;
}
