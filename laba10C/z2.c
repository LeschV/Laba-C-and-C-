#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[25];
    char author[50];
    int public_year;
    char availability[3];
} Book;

int main(void)
{

    printf("Please, input num of books:");
    int num_of_books;
    scanf("%d", &num_of_books);
    Book *Books = (Book *)malloc(num_of_books * sizeof(Book));

    for (int i = 0; i != num_of_books; ++i)
    {
        printf("Please,input title of %d book:", i + 1);
        scanf("%s", &Books[i].title);
        printf("Please,input author of %d book:", i + 1);
        scanf("%s", &Books[i].author);
        printf("Please,input public year of %d book:", i + 1);
        scanf("%d", &Books[i].public_year);
        printf("Please,input availability of %d book:", i + 1);
        scanf("%s", &Books[i].availability);
        printf("\n\n");
    }

    char Find[20];
    printf("Input title of the book, u wanna find:");
    scanf("%s", &Find);
    printf("\n\n");
    int check = -1;
    for (int i = 0; i != num_of_books; ++i)
    {
        if (check < 0)
        {
            if (strcmp(Find, Books[i].title) == 0)
            {
                check = i;
            }
        }
    }
    if (check >= 0)
    {
        printf("The book was found:\n");
        printf("Title: %s\nAuthor: %s\nYear of publication: %d\nAvailability: %s\n", Books[check].title, Books[check].author, Books[check].public_year, Books[check].availability);
    }
    else
    {
        printf("Book was not found!\n");
    }

    return 0;
}