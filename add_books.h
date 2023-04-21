#ifndef add_books_h 
#define add_books_h
#include "books.h"
#include "filebook.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addBook() ;
Book createBook(char *title, char *author, char *publisher, int year, int pages, int price);
void removeBook(Book *books, int *size, Book book);


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

    Book book = createBook(title, author, publisher, year, pages, price);
    writeBook("books.txt", book);
}



Book createBook(char *title, char *author, char *publisher, int year, int pages, int price)
{
    Book book;
    strcpy(book.title, title);
    strcpy(book.author, author);
    strcpy(book.publisher, publisher);
    book.year = year;
    book.pages = pages;
    book.price = price;
    return book;
}

void removeBook(Book *books, int *size, Book book)
{
    for (int i = 0 ; i < *size; i++)
    {
        if (strcmp(books[i].title, book.title) == 0)
        {
            for (int j = i; j < *size - 1; j++)
            {
                books[j] = books[j + 1];
            }
            *size = *size - 1;
            break;
        }
    }
}
#endif