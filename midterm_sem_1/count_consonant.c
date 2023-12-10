#include<stdio.h>
#include<string.h>

int main(){
    char str[100001];
    scanf("%s", str);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            continue;
        }else{
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}