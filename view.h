#ifndef view_h 
#define view_h
#include "books.h"
#include "printbook.h"
#include <stdio.h>


void view(Book book,int size);

int i = 0;
void view(Book book,int size)
{
    while(i != size)
    {
      printBook(book[i]);
      printf("\n");
      i++;
    }
 
}

#endif