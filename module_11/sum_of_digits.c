#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char digits[n+1];
    scanf("%s", digits);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += digits[i] - '0';
    }
    printf("%lld", sum);

    return 0;
}