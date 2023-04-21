#ifndef books_h
#define books_h

// this header file contains the definition of the Book structure

typedef struct
{
    char title[50];
    char author[50];
    char publisher[50];
    int year;
    int pages;
    int price;
} Book;




#endif


