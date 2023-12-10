#include<stdio.h>

int main(){
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        if(i < n - 1)
        {
            s--;
            k += 2;
        }
        if(i > n - 1){
             s++;
            k -= 2;
        }
        printf("\n");
    }
    
    return 0;
}