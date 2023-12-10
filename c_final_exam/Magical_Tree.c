#include<stdio.h>

int main(){
    int n, s, k = 1;
    scanf("%d", &n);
    int lines = ((n - 1) / 2) + 6;
    s = lines - 1;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n + 5; j++)
        {
            if(j < 5){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}