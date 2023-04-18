#ifndef printbook_h 
#define printbook_h
#include "books.h"
#include <stdio.h>


void printBook(Book book);


void printBook(Book book)
{
    printf("Title: %s \n", book.title);
    printf("Author: %s \n", book.author);
    printf("Publisher: %s \n", book.publisher);
    printf("Year: %d \n", book.year);
    printf("Pages: %d \n", book.pages);
    printf("Price: %d \n", book.price);
}



#endif