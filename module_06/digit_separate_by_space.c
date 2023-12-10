#include<stdio.h>
 
int main()
{
    int test;
    scanf("%d", &test);
    for(int t = 1; t <= test; t++)
    {
        int n;
    scanf("%d", &n);
    do
    {
        printf("%d ", n%10);
        n = n/10;
    } while (n != 0);
    printf("\n");
    }
    
    return 0;
}


//  int n;
//     scanf("%d", &n);
//     int number;
//     for(int i = 1; i <= n; i++)
//     {
//         scanf("%d", &number);
//         while(number > 10){
//         int last_digit = number % 10;
//             printf("%d ", last_digit);
//             number = number / 10;
//         }
//         printf("%d\n", number);
//     }