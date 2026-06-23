#include <stdio.h>

int main()
{
    float basic, hra, da, pf, net;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    pf = basic * 0.05;

    net = basic + hra + da - pf;

    printf("\nBasic Salary = %.2f\n", basic);
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("PF = %.2f\n", pf);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
