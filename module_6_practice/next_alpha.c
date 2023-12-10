#include<stdio.h>

int main(){
    char lowercase_alpha;
    scanf("%c", &lowercase_alpha);
    if(lowercase_alpha == 'z'){
        printf("a");
    }
    else {
        printf("%c", lowercase_alpha + 1);
    }
    return 0;
}