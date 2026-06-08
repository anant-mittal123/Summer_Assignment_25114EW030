
#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    if(n == 1)
        return 0;

    if(n == 2)
        return 1;

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}
