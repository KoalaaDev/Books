#ifndef sort_h
#define sort_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "books.h"

#define MAX 1000000
/*
These functions are used to sort the books in the library
*/

// This function is used to sort the books in the library by their title
void sortTitle(Book *books, int n);

// This function is used to sort the books in the library by their author
void sortAuthor(Book *books, int n);

// This function is used to sort the books in the library by their year
void sortYear(Book *books, int n);

// This function is used to sort the books in the library by their publisher
void sortPublisher(Book *books, int n);

// This function is used to sort the books in the library by their price
void sortPrice(Book *books, int n);

void sortTitle(Book *books, int n)
{
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(books[i].title, books[j].title) > 0)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortAuthor(Book *books, int n)
{
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(books[i].author, books[j].author) > 0)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortYear(Book *books, int n)
{
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (books[i].year > books[j].year)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortPublisher(Book *books, int n)
{
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(books[i].publisher, books[j].publisher) > 0)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void sortPrice(Book *books, int n)
{
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (books[i].price > books[j].price)
            {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}


#endif /* sort_h */