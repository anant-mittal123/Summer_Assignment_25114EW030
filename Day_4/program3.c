#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
