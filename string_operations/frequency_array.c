#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s", str);
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
       count[str[i] - 97]++;
    }
    
    // for (int i = 0; i <= 25; i++)
    // {
    //     if(count[i] != 0)
    //     {
    //         printf("%c - %d\n", str[i], count[str[i] - 96]);
    //     }
    // }
    // printf("%d", count[0]);

    for (int i = 0; i < strlen(str); i++)
    {
        if(count[str[i] - 97] != 0)
        {

            printf("%c - %d\n", str[i], count[str[i] - 97]);
            count[str[i] - 97] = 0;
        }
    }
    
    
    return 0;
}