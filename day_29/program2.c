#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, choice;

    printf("1. Display Array\n");
    printf("2. Sum of Array\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(choice == 1)
    {
        printf("Array Elements:\n");
        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    else if(choice == 2)
    {
        for(i = 0; i < n; i++)
            sum = sum + a[i];

        printf("Sum = %d", sum);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
