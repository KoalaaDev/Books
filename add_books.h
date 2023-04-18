#ifndef add_books_h 
#define add_books_h
#include "books.h"
#include <stdio.h>

void addBook(Book book) ;

void addBook(Book book) {

printf("Enter Book Title: ");
scanf("%s",book.title);

printf("Enter Author name: ") ;
scanf("%s",book.author) ;

printf("Enter Publisher name: ") ;
scanf("%s",book.publisher) ;

printf("Enter Year: ") ;
scanf("%d",book.year) ;

printf("Enter Price: ") ;
scanf("%d",book.price) ;

}

#endif