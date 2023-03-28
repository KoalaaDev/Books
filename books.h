#ifndef books_h
#define books_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[50];
    char author[50];
    char publisher[50];
    int year;
    int pages;
    int price;
} Book;

void printBook(Book book);
void printBookList(Book *books, int size);
void printBookListByAuthor(Book *books, int size, char *author);
void printBookListByPublisher(Book *books, int size, char *publisher);
void printBookListByYear(Book *books, int size, int year);
void printBookListByPrice(Book *books, int size, int price);
void addBook(Book *books, int *size, Book book);
void removeBook(Book *books, int *size, Book book);
Book createBook(char *title, char *author, char *publisher, int year, int pages, int price);
void ReadFile(char *filename, Book *books);


void printBook(Book book){
    printf("Title : %s \n",book.title);
    printf("Author : %s \n",book.author);
    printf("Publisher : %s \n",book.publisher);
    printf("Year : %d\n",book.year);
    printf("Pages: %d\n",book.pages);
    printf("Price : %d \n",book.price);
}

void printBookList(Book *books, int size)
{
    for (int i = 0; i < size; i++)
    {
        printBook(books[i]);
        printf("\n");
    }
}

void printBookListByAuthor(Book *books, int size, char *author)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBookListByPublisher(Book *books, int size, char *publisher)

{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].publisher, publisher) == 0)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBokkByYear(Book *books, int size, int year)
{
    for(int i = 0; i < size; i++)

    {
        if (books[i].year == year)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}

void printBookListByPrice(Book *books, int size, int price)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i].price == price)
        {
            printBook(books[i]);
            printf("\n");
        }
    }
}


    void removeBook(Book *books,int *size,Book book){
        books[*size];
        *size = *size++;
    }


void removeBook(Book *books, int *size, Book book)
{
    for (int i = 0 ; i < *size; i++)
    {
        if (strcmp(books[i].title, book.title) == 0)
        {
            for (int j = i; j < *size - 1; j++)
            {
                books[j] = books[j + 1];
            }
            *size = *size - 1;
            break;
        }
    }
}

Book createBook(char *title, char *author, char *publisher, int year, int pages, int price)
{
    Book book;
    strcpy(book.title, title);
    strcpy(book.author, author);
    strcpy(book.publisher, publisher);
    book.year = year;
    book.pages = pages;
    book.price = price;
    return book;
}

void ReadFile(char *filename, Book *books)
{
    FILE *fp;
    Book book;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file %s \n", filename);
        exit(1);
        return;
    }
    // parse file and create books
    char line[100];
    char *token;
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
        addBook(books, &size, book);
    }
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


