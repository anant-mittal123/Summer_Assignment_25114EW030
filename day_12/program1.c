#include <stdio.h>

int palindrome(int n)
{
    int temp, rev = 0;

    temp = n;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
