//
//  search.h
//  test
//
//  Created by Akul Rampersand on 24/04/2023.
//

#ifndef search_h
#define search_h

void searchBook(char *title) {
    // Open the file for reading
    FILE *fp = fopen("books.txt", "r");
    if (fp == NULL) {
        printf("Error: Failed to open file.\n");
        return;
    }
    
    char line[256];
    int found = 0;
    while (fgets(line, sizeof(line), fp)) {
        char *token = strtok(line, ",");
        if (strcmp(token, title) == 0) {
            printf("Title\tAuthor\tPublisher\tYear\tPages\tPrice\n");
            printf("%s\t\t", token);
            while (token != NULL) {
                token = strtok(NULL, ",");
                printf("%s\t", token);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    
    // Close the file
    fclose(fp);
    
}
    
#endif /* search_h */
