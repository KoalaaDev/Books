#ifndef filebook_h 
#define filebook_h
// this header file contains the txt file functions
#include "books.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void writeFile(char *filename, Book *books, int size);
Book* ReadFile(char *filename);
void writeBook(char *filename, Book book);


void writeBook(char *filename, Book book)
{
    writeFile(filename, &book, 1);
}


Book* ReadFile(char *filename)
{
    FILE *fp;
    Book book;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file %s \n", filename);
        exit(1);
    }
    // parse file and create books
   char line[100];
   char *token;
   Book *books = (Book *)malloc(sizeof(Book));
   while (fgets(line, 100, fp) != NULL)
   {
    token = strtok(line, ",");
    strcpy(book.title, token);
    token = strtok(NULL, ",");
    strcpy(book.author, token);
    token = strtok(NULL, ",");
    strcpy(book.publisher, token);
    token = strtok(NULL, ",");
    book.year = atoi(token);
    token = strtok(NULL, ",");
    book.pages = atoi(token);
    token = strtok(NULL, ",");
    book.price = atoi(token);
    int size = 0;
    
    books[size] = book;
    size++;
   }
   return books;
    fclose(fp);
    
}

void writeFile(char *filename, Book *books, int size)
{
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file %s \n", filename);
        exit(1);
        return;
    }
    for (int i = 0; i < size; i++)
    {
        fprintf(fp, "%s,%s,%s,%d,%d,%d \n", books[i].title, books[i].author, books[i].publisher, books[i].year, books[i].pages, books[i].price);
    }
    fclose(fp);
}
#endif