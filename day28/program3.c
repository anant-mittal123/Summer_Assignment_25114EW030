#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price, total;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Ticket Price: ");
    scanf("%f", &price);

    total = tickets * price;

    printf("\nTicket Booked Successfully\n");
    printf("Name: %s\n", name);
    printf("Tickets: %d\n", tickets);
    printf("Total Amount: %.2f\n", total);

    return 0;
}
