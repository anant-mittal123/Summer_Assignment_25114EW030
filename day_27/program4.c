#include <stdio.h>

int main()
{
    int t1, t2, t3, t4, t5;
    int p1, p2, p3, p4;
    int total;
    float per;

    printf("Enter marks of 5 Theory Subjects (out of 70):\n");
    scanf("%d%d%d%d%d", &t1, &t2, &t3, &t4, &t5);

    printf("Enter marks of 4 Practical Subjects (out of 100):\n");
    scanf("%d%d%d%d", &p1, &p2, &p3, &p4);

    total = t1 + t2 + t3 + t4 + t5 + p1 + p2 + p3 + p4;

    per = (total * 100.0) / 750;

    printf("\n----- AKTU MARKSHEET -----\n");

    printf("Theory 1 = %d\n", t1);
    printf("Theory 2 = %d\n", t2);
    printf("Theory 3 = %d\n", t3);
    printf("Theory 4 = %d\n", t4);
    printf("Theory 5 = %d\n", t5);

    printf("Practical 1 = %d\n", p1);
    printf("Practical 2 = %d\n", p2);
    printf("Practical 3 = %d\n", p3);
    printf("Practical 4 = %d\n", p4);

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if(t1 >= 21 && t2 >= 21 && t3 >= 21 &&
       t4 >= 21 && t5 >= 21 && per >= 40)
    {
        printf("Result = PASS");
    }
    else
    {
        printf("Result = FAIL");
    }

    return 0;
}
