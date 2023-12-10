#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    int sum_of_positives = 0;
    int sum_of_negatives = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] > 0){
            sum_of_positives += ar[i];
        }else {
            sum_of_negatives += ar[i];
        }
    }
    printf("%d %d", sum_of_positives, sum_of_negatives);

    return 0;
}