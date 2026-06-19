#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i, j, count1 = 0, count2 = 0;

    scanf("%s", s1);
    scanf("%s", s2);

    for(i = 0; s1[i] != '\0'; i++)
        count1++;

    for(i = 0; s2[i] != '\0'; i++)
        count2++;

    if(count1 != count2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < count1; i++)
    {
        int found = 0;

        for(j = 0; j < count2; j++)
        {
            if(s1[i] == s2[j])
            {
                found = 1;
                s2[j] = '*';
                break;
            }
        }

        if(found == 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
