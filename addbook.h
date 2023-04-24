#ifndef addbook_h
#define addbook_h
#define addbook_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// Struct to hold book details
typedef struct {
    char title[50];
    char author[50];
    char publisher[50];
    int year;
    int pages;
    int price;
} book;

// Function to add a book to the file
void addBook() {
    char title[50], author[50], publisher[50];
    int year, pages, price;

    printf("Enter title: ");
    scanf("%s", title);
    printf("Enter author: ");
    scanf("%s", author);
    printf("Enter publisher: ");
    scanf("%s", publisher);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter pages: ");
    scanf("%d", &pages);
    printf("Enter price: ");
    scanf("%d", &price);

    // Open the file for appending
    FILE *fp = fopen("book1.txt", "a");
    if (fp == NULL) {
        printf("Error: Failed to open file.\n");
        return;
    }

    // Write the book details to the file
    fprintf(fp, "%s,%s,%s,%d,%d,%d\n", title, author, publisher, year, pages, price);

    // Close the file
    fclose(fp);
}


#endif /* addbook_h */
