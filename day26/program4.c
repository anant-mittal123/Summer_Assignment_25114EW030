#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("1. 2 + 3 = ?\n");
    scanf("%d", &ans);

    if(ans == 5)
        score++;

    printf("2. 10 - 4 = ?\n");
    scanf("%d", &ans);

    if(ans == 6)
        score++;

    printf("Score = %d", score);

    return 0;
}
