#include<stdio.h>

int main(){
    int correct_password = 1999;
    int given_password;

    while(given_password != correct_password){
        scanf("%d", &given_password);
        if(given_password != correct_password){
            printf("Wrong\n");
        }
    }
    printf("Correct\n");

    return 0;
}