#include <stdio.h>

int main()
{
    int num = 100, guess;

    do
    {
        scanf("%d", &guess);

        if(guess > num)
            printf("Too High\n");
        else if(guess < num)
            printf("Too Low\n");
        else
            printf("Correct");

    } while(guess != num);

    return 0;
}
