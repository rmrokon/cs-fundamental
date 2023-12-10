#include <stdio.h>

int main()
{
    int a = 1000000001;
    long long int b = 10000000000444;
    double c = 2.453535353344556677;
    printf("%0.15lf", c);
    // printf("%d %lld", a, b);
    return 0;
}