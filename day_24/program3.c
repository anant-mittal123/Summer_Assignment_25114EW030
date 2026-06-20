#include <stdio.h>

int main()
{
    char s[100], word[100];
    int i = 0, j = 0, max = 0, start = 0;

    gets(s);

    for(i = 0; ; i++)
    {
        if(s[i] != ' ' && s[i] != '\0')
        {
            j++;
        }
        else
        {
            if(j > max)
            {
                max = j;
                start = i - j;
            }
            j = 0;
        }

        if(s[i] == '\0')
            break;
    }

    for(i = 0; i < max; i++)
    {
        word[i] = s[start + i];
    }

    word[max] = '\0';

    printf("%s", word);

    return 0;
}
