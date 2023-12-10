#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int number;
    int even =0, odd=0, pos=0, neg=0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        if(number % 2 == 0)
        {
            even++;
        }
        if(number % 2 != 0)
        {
            odd++;
        }
        if(number > 0)
        {
            pos++;
        }
        if(number < 0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}