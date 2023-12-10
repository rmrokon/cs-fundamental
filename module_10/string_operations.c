#include<stdio.h>
#include<string.h>

int main(){
    char str_a[11], str_b[11], temp[21];
    scanf("%s %s", str_a, str_b);
    for (int i = 0; i <= strlen(str_a); i++)
    {
        temp[i] = str_a[i];
    }
    printf("%ld %ld\n", strlen(str_a), strlen(str_b));
    int original_len_of_temp = strlen(temp);
    for (int i = 0; i <= strlen(str_b); i++)
    {
        temp[original_len_of_temp + i] = str_b[i];
    }
    printf("%s\n", temp);
    str_a[0] = str_b[0];
    str_b[0] = temp[0];
    printf("%s %s", str_a, str_b);
    return 0;
}