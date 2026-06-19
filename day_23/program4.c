#include <stdio.h>

int main()
{
    char s[100], ch;
    int i, j, count, max = 0;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
                count++;
        }

        if(count > max)
        {
            max = count;
            ch = s[i];
        }
    }

    printf("%c", ch);

    return 0;
}
