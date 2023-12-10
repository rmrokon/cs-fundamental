#include<stdio.h>
#include<string.h>

int main(){
    int num_of_test_case;
    char str[10001];
    scanf("%d", &num_of_test_case);
    int count_digits = 0;
    int count_small = 0;
    int count_capital = 0;
    for (int i = 0; i < num_of_test_case; i++)
    {

        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                count_small++;
            }
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                count_capital++;
            }
            if(str[i] >= '0' && str[i] <= '9')
            {
                count_digits++;
            }
        }
        printf("%d %d %d\n", count_capital, count_small, count_digits);
        count_digits = 0;
        count_small = 0;
        count_capital = 0;
    }
    
    return 0;
}