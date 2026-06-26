#include <stdio.h>

int main()
{
    int roll[10], marks[10], n, i;
    char name[10][50];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n\n", marks[i]);
    }

    return 0;
}
