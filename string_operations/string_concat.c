#include<stdio.h>
#include<string.h>

int main(){
    // int len_a
    char a[200], b[100];
    scanf("%s %s", a, b);
    // int k = strlen(a);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }
    strcat(a, b);
    printf("%s", a);
    // printf("%d", strlen(a));
    return 0;
}