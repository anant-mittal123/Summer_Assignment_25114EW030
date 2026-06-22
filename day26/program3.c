#include <stdio.h>

int main()
{
    int balance = 1000, amount, choice;

    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("%d", balance);
    }
    else if(choice == 2)
    {
        scanf("%d", &amount);

        if(amount <= balance)
        {
            balance = balance - amount;
            printf("%d", balance);
        }
        else
        {
            printf("Insufficient Balance");
        }
    }

    return 0;
}
