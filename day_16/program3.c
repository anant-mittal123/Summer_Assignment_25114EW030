#include <stdio.h>

int main()
{
    int a[100], n, i, j, sum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }

    printf("No Pair Found");

    return 0;
}
