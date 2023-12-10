#include<stdio.h>

int main(){
    int num_of_test_case, m1, m2, d;
    scanf("%d", &num_of_test_case);

    for (int i = 0; i < num_of_test_case; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int required_day_for_m1_and_m2 = (m1 * d) / (m1 + m2);
        int ans = d - required_day_for_m1_and_m2;
        printf("%d\n", ans);
    }
    
    return 0;
}