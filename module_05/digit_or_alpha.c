#include<stdio.h>

int main(){
    char x;
    int range_for_number = 58;
    scanf("%c", &x);
    if(x > 58){
        printf("ALPHA\n");
        if(x >= 'a'){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }else{
        printf("IS DIGIT");
    }
    return 0;
}