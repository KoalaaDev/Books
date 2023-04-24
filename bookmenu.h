//
//  bookmenu.h
//  test
//
//  Created by Akul Rampersand on 24/04/2023.
//

#ifndef bookmenu_h
#define bookmenu_h
#include "addbook.h"
void bookMenu()
{
    int n, choice;
    
    while(1){
        printf("\n\nBOOK MENU\n\n");
        printf("1. VIEW BOOK\n");
        printf("2. ADD BOOK\n");
        printf("3. BACK TO MAIN MENU\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                viewBooks();
                break;
        
            case 2://add orders
                addBook();
                break;
    
            case 3:
                
                break;

            default:
                printf("\nWrong input! Enter your choice again: ");
                scanf("%d", &choice);
        }
    }
}

#endif /* bookmenu_h */
