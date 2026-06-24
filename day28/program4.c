#include <stdio.h>

int main()
{
    char name[50];
    long long mobile;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Mobile Number: ");
    scanf("%lld", &mobile);

    printf("\nContact Details\n");
    printf("Name: %s\n", name);
    printf("Mobile: %lld\n", mobile);

    return 0;
}
