#include <stdio.h>

int main()
{
    int accno;
    char name[50];
    float balance, deposit;

    printf("Enter Account Number: ");
    scanf("%d", &accno);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance = balance + deposit;

    printf("\nAccount Number: %d\n", accno);
    printf("Name: %s\n", name);
    printf("Updated Balance: %.2f\n", balance);

    return 0;
}
