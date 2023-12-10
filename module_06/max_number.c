#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int max = 0;
    for(int i = 1; i <= n; i++)
    {   
        int current_number;
        scanf("%d", &current_number);
        if(current_number > max)
        {
            max = current_number;
        }
    }
    printf("%d", max);
    return 0;
}