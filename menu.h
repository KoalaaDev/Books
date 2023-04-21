#ifndef menu_h 
#define menu_h
#include "books.h"
#include "add_books.h"
#include "view.h"
#include "filebook.h"
#include <stdio.h>



void menu();
void add_books();
void view();
void search();
void sort();

void menu(){
      while(1){
      int choice;
      Book books = ReadFile("books.txt");
      printf("1. Add books\n");
      printf("2. View books\n");
      printf("3. Search books\n");
      printf("4. Sort books\n");
      printf("5. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
         case 1:
               add_books();
               break;
      //    case 2:
      //          view();
      //          break;
      //    case 3:
      //          search();
      //          break;
      //    case 4:
      //          sort();
      //          break;
      //    case 5:
      //          exit(0);
      //          break;
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
                  viewAll();
                  break;
            case 2:
                  return;
            default:
                  printf("Invalid choice\n");
                  break;
            }
      }
}



#endif