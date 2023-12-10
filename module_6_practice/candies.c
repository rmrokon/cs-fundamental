#include<stdio.h>

int main(){
    int candies_of_timmon, candies_of_pumbaa;
    scanf("%d %d", &candies_of_timmon, &candies_of_pumbaa);
    if(candies_of_timmon - candies_of_pumbaa >= 0){
        printf("%d", candies_of_timmon - candies_of_pumbaa);
    }else{
        printf("0");
    }
    return 0;
}