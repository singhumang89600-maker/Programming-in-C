#include <stdio.h>

int main()
{
    int s, p, r, t;

    printf("Enter principal amount: ");
    scanf("%d", &p);

    printf("Enter rate of interest: ");
    scanf("%d", &r);

    printf("Enter time in years: ");
    scanf("%d", &t);

    s = (p * r * t) / 100;

    printf("Final Simple Interest = %d", s);

    return 0;
}
