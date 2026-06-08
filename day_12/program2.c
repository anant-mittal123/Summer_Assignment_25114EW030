#include <stdio.h>

int isArmstrong(int n)
{
    int temp = n, sum = 0, r;

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
