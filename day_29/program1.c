#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);

    if(choice == 1)
        printf("Result = %d", a + b);
    else if(choice == 2)
        printf("Result = %d", a - b);
    else if(choice == 3)
        printf("Result = %d", a * b);
    else if(choice == 4)
        printf("Result = %d", a / b);
    else
        printf("Invalid Choice");

    return 0;
}
