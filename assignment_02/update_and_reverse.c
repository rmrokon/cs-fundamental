#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    int x, v;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d %d", &x, &v);
    ar[x] = v;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    
    
    return 0;
}