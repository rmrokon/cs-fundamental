#include<stdio.h>
#include<string.h>

int main(){
    char str[1001];
    scanf("%s", str);
    int point_a = 0;
    int point_b = strlen(str) - 1;
    int is_palindrome = 1;
    for (int i = 0; point_a < point_b; i++)
    {
        if(str[point_a] != str[point_b]){
            is_palindrome = 0;
            break;
        }
        point_a++;
        point_b--;
    }
    if(is_palindrome == 0){
        printf("NO");
    }else{
        printf("YES");
    }
    
    return 0;
}