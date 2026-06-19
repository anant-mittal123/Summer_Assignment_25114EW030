#include <stdio.h>

int main()
{
    char s[100];
    int i, j;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                printf("%c", s[i]);
                return 0;
            }
        }
    }

    return 0;
}
