#ifndef menu_h 
#define menu_h
#include "books.h"
#include "add_books.h"
#include "view.h"
#include <stdio.h>



void menu();

void menu(){


 int select;
 printf("1. Add new book\n");
 printf("2. View all books\n");
 printf("3.Exit\n");

 printf("Select : \n");
scanf("%d",&select);

 switch (select)
 {
 case 1 : 
    addBook(Book);
    break;
 case 2 : 
    viewbook(Book,size);
case 3 :
    return ;
 default:
    break;
 }




}


#endif