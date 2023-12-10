#include<stdio.h>

int main(){
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        long long int m, d;
        int a,b,c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        d = m / (a * b * c);
        if(m % (a * b * c) != 0){
            printf("-1\n");
        }else{
            printf("%lld\n", d);
        }
    }
    return 0;
}