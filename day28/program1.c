#include <stdio.h>

int main()
{
    int bookid;
    char bookname[50];
    int choice;

    printf("1. Issue Book\n");
    printf("2. Return Book\n");
    scanf("%d", &choice);

    printf("Enter Book ID: ");
    scanf("%d", &bookid);

    printf("Enter Book Name: ");
    scanf("%s", bookname);

    if(choice == 1)
        printf("Book Issued Successfully");
    else if(choice == 2)
        printf("Book Returned Successfully");
    else
        printf("Invalid Choice");

    return 0;
}
