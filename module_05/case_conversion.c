#include<stdio.h>

int main(){
    char n, newCaseLetter;
    scanf("%c", &n);
    if(n <= 90){
        newCaseLetter = n + 32;
    }else{
        newCaseLetter = n - 32;
    }
    printf("%c", newCaseLetter);
    return 0;
}