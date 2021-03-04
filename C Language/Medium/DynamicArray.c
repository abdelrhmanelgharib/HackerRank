/*
 *  Author: El-Gharib
 *  Created On: 3/3/2021
 *  Version: 3
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    int total_number_of_queries;
    int type_of_query;

    /* get number of sheleves and quries from user */
    scanf("%d", &total_number_of_shelves);
    scanf("%d", &total_number_of_queries);
    
    /* allocate books and page in heab */
    total_number_of_books = (int*)malloc(sizeof(int)*total_number_of_shelves);
    total_number_of_pages = (int**)malloc(sizeof(int*)*total_number_of_shelves);
    
    /* 
    * in this loop we initilize book to zero 
    * and store address of every element of number of page in array
    */
    for (int i=0; i<total_number_of_shelves;i++)
    {
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = (int*)malloc(sizeof(int));
    }

    while (total_number_of_queries--) {
        
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);

            /* add 1 every time you access the same shelve */
            *(total_number_of_books+x)+=1;

            /* change size of number of pages in heab and save contents of already allocated */
            *(total_number_of_pages+x) = realloc(*(total_number_of_pages+x), *(total_number_of_books+x)*sizeof(int));

            /* add number of pages in the same shelve */
            *(*(total_number_of_pages+x)+*(total_number_of_books+x))=y;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else{
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}