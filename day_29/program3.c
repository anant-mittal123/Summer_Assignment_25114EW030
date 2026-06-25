#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int choice;

    printf("1. String Length\n");
    printf("2. Reverse String\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter String: ");
    scanf("%s", s);

    if(choice == 1)
    {
        printf("Length = %d", strlen(s));
    }
    else if(choice == 2)
    {
        strrev(s);
        printf("%s", s);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
