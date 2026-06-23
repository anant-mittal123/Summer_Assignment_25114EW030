#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks;

    scanf("%d", &roll);
    scanf("%s", name);
    scanf("%f", &marks);

    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Marks: %.2f", marks);

    return 0;
}
