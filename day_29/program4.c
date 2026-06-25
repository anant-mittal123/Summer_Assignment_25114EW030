#include <stdio.h>

int main()
{
    int id, quantity;
    char item[50];
    float price, total;

    printf("Enter Item ID: ");
    scanf("%d", &id);

    printf("Enter Item Name: ");
    scanf("%s", item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\nInventory Details\n");
    printf("Item ID: %d\n", id);
    printf("Item Name: %s\n", item);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Total Value: %.2f\n", total);

    return 0;
}
