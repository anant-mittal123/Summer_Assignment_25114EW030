#include <stdio.h>

int main()
{
    char s[100];
    int i, j, flag = 1;

    scanf("%s", s);

    for(j = 0; s[j] != '\0'; j++);

    for(i = 0, j = j - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
