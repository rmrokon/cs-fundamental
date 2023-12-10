#include <stdio.h>
#include <string.h>

int is_palindrome(char str[1001])
{
    int j = strlen(str) - 1;
    for (int i = 0; i < j; i++)
    {
        if(str[i] != str[j]){
            return 0;
        }
        j--;
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    int result = is_palindrome(str);
    if(result == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}