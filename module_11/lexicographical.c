#include<stdio.h>

int main(){
    char str_a[21], str_b[21];
    scanf("%s %s", str_a, str_b);
    int i = 0;
    while(str_a[i] != '\0' || str_b[i] != '\0')
    {
        if(str_a[i] != str_b[i])
        {
            break;
        }
        i++;
    }
    
    if(str_a[i] == '\0' && str_b[i] != '\0')
    {
        printf("%s", str_a);
    }
    else if (str_b[i] == '\0' && str_a[i] != '\0')
    {
       printf("%s", str_b);
    }
    else if(str_a[i] > str_b[i])
    {
        printf("%s", str_b);
    }
    else if(str_a[i] < str_b[i])
    {
         printf("%s", str_a);
    }
    else {
         printf("%s", str_a);
    }
    

    return 0;
}