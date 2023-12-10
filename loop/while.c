#include<stdio.h>

int main()
{   
    int i = 1;
    // for(i = 1; i <= 10; i++){
    //     if(i%2 == 0){
    //         printf("%d - even\n", i);
    //     }else{
    //         printf("%d - odd\n", i);
    //     }
    // }

    while (i <= 10)
    {
       if(i%2 == 0){
            printf("%d - even\n", i);
        }else{
            printf("%d - odd\n", i);
        }
        i++;
    }
    
    return 0;
}