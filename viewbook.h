//
//  viewbook.h
//  test
//
//  Created by Akul Rampersand on 24/04/2023.
//

#ifndef viewbook_h
#define viewbook_h

void viewBooks();

void viewBooks() {
    // Open the file for reading
    FILE *fp = fopen("book1.txt", "r");
    if (fp == NULL) {
        printf("Error: Failed to open file.\n");
        return;
    }

    // Read and print each book detail from the file
    char line[256];
    printf("Title\tAuthor\tPublisher\tYear\tPages\tPrice\n");
    while (fgets(line, sizeof(line),fp)) {
        char *token = strtok(line,",");
        printf("%s \t", token);
        while (token != NULL) {
            token = strtok(NULL,",");
            printf("  %s\t", token);
        }
        printf("\n");
    }

    // Close the file
    fclose(fp);
}
#endif /* viewbook_h */
