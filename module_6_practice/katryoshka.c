#include<stdio.h>

int main(){
    int eyes, mouths, bodies;
    scanf("%d %d %d", &eyes, &mouths, &bodies);
    int number_of_katryoshka = 0;
    while(eyes != 0 && bodies != 0){
        if(eyes >= 2 && bodies >= 1){
        number_of_katryoshka += 1;
        eyes -= 2;
        bodies -= 1;
        printf("eye-%d mouth-%d body-%d\n", eyes, mouths, bodies);
    }
    if(eyes >= 2 && bodies >= 1 && mouths >= 1){
        number_of_katryoshka += 1;
        eyes -= 2;
        bodies -= 1;
        mouths -= 1;
        printf("eye-%d mouth-%d body-%d\n", eyes, mouths, bodies);
    }
    if(eyes >= 1 && bodies >= 1 && mouths >= 1){
        number_of_katryoshka += 1;
        eyes -= 1;
        bodies -= 1;
        mouths -= 1;
        printf("eye-%d mouth-%d body-%d\n", eyes, mouths, bodies);
    }
    }
    printf("this is the result ::: %d\n", number_of_katryoshka);
    printf("eye-%d mouth-%d body-%d\n", eyes, mouths, bodies);
    return 0;
}