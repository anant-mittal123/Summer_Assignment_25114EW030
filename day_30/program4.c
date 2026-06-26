#include <stdio.h>

void input(int roll[], char name[][50], int marks[], int n);
void display(int roll[], char name[][50], int marks[], int n);

int main()
{
    int roll[10], marks[10], n;

    char name[10][50];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    input(roll, name, marks, n);

    printf("\nStudent Records\n");
    display(roll, name, marks, n);

    return 0;
}

void input(int roll[], char name[][50], int marks[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

void display(int roll[], char name[][50], int marks[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRoll = %d\n", roll[i]);
        printf("Name = %s\n", name[i]);
        printf("Marks = %d\n", marks[i]);
    }
}
