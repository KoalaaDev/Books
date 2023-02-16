#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "books.h"

void main() {
    Book arr[3];
    // read from books.txt
    ReadFile("books.txt", arr);
    // print all books
    int size = 1;
    printBookList(arr, 1);
    addBook(arr, &size, createBook("The Lord of the Rings", "J.R.R. Tolkien", "Allen & Unwin", 1954, 1216, 100));
    printBookList(arr, 2);
    writeFile("books.txt", arr, 2);
}