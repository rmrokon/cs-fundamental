#include<stdio.h>

int main(){
    int n, x, flag = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           if(ar[i] + ar[j] == x){
            flag = 1;
           }
        }       
    }
    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
} 