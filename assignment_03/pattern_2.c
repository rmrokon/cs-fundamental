#include<stdio.h>

int main(){
    int n, s, k = 1;
    scanf("%d", &n);
    s = n -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < s; j++)
        {
           printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
           printf("%d", j);
        }
        s--;
        printf("\n");
        
    }
    
    return 0;
}