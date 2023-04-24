#ifndef view_h
#define view_h

#include "books.h"
#include <stdio.h>


void viewbook(Book book,int size);
void printBook(Book book);
void printBookList(Book *books, int size);
void printBookListByAuthor(Book *books, int size, char *author);
void printBookListByPublisher(Book *books, int size, char *publisher);
void printBookListByYear(Book *books, int size, int year);
void printBookListByPrice(Book *books, int size, int price);


void viewbook(Book book,int size)
{
    int i = 0;
    while(i != size)
    {
     
        printBook(book);
        i++;
    }
}

void printBook(Book book){
    printf("Title : %s \n",book.title);
    printf("Author : %s \n",book.author);
    printf("Publisher : %s \n",book.publisher);
    printf("Year : %d\n",book.year);
    printf("Pages: %d\n",book.pages);
    printf("Price : %d \n",book.price);
}

void printBookList(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        printBook(books[i]);
        printf("\n");
    }
}

void printBookListByAuthor(Book *books, int size, char *author)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBookListByPublisher(Book *books, int size, char *publisher)

{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].publisher, publisher) == 0)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBookListByYear(Book *books, int size, int year)
{
    for(int i = 0; i < size; i++)

    {
        if (books[i].year == year)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBookListByPrice(Book *books, int size, int price)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i].price == price)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

#endif
