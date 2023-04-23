#ifndef menu_h
#define menu_h
#include "books.h"
#include "add_books.h"
#include "viewAll.h"
#include "sorting.h"
#include "filebook.h"
#include <stdio.h>



void menu();
void add_books();
void view();
void sort();

void menu(){
      while(1){
      int choice;
      //Book books = ReadFile("books.txt");
      printf("1. Add books\n");
      printf("2. View books\n");
      printf("3. Sort books\n");
      printf("5. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
         case 1:
               add_books();
               break;
          case 2:
                view();
               break;
      
          case 3:
               sort();
              break;
          case 4:
               exit(0);
               break;
         default:
               printf("Invalid choice\n");
               break;
      }
      }

}

void add_books(){
      while (1)
      {
            int choice;
            printf("1. Add book\n");
            printf("2. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                  addBook();
                  break;
            case 2:
                  return;
            default:
                  printf("Invalid choice\n");
                  break;
            }
      }
}

void view(){
      while (1)
      {
            int choice;
            printf("1. View all books\n");
            printf("2. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                  viewbook(Book,size);
                  break;
            case 2:
                  return;
            default:
                  printf("Invalid choice\n");
                  break;
            }
      }
}
void sort()
{
    while(1)
     {

    
    int choice;
      printf("1.Sort by title");
      printf("2.Sort by author");
      printf("3.Sort by year");
      printf("4.Sort by publisher");
      printf("5.Sort by price");
      printf("6.Exit");
      printf("Select : ");
      scanf("%d",&choice);
       switch(choice){
          case 1 :
           sortTitle(*books,n);
          case 2 :
           sortAuthor();
          case 3 :
           sortYear();
          case 4 :
           sortPublisher();
          case 5 :
           sortPrice();
          case 6 :
           return ;
          } 
    } 
}
#endif

