#include<stdio.h>
#include<string.h>

int main(){
    char n[1000001];
    scanf("%s", n);
    int str_len = strlen(n);
    int count = 0;
    for(int i = 0; i < str_len; i++)
    {   int digit = n[i] - '0';
        count += digit;
    }
    printf("%d", count);
    return 0;
}