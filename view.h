#ifndef view_h 
#define view_h
#include "books.h"
#include <stdio.h>


void viewbook(Book book,int size);

int i = 0;
void viewbook(Book book,int size)
{
    while(i != size)
    {
     
printf("Title : %s \n",book.title);
    printf("Author : %s \n",book.author);
    printf("Publisher : %s \n",book.publisher);
    printf("Year : %d\n",book.year);
    printf("Pages: %d\n",book.pages);
    printf("Price : %d \n",book.price);
    printf("\n");





      i++;
    }
 
}

#endif