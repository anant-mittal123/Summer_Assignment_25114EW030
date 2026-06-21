#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, temp, n;

    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    n = n1 + n2;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", c[i]);

    return 0;
}
