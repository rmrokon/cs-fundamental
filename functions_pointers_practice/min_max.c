#include<stdio.h>
int min(int * arr, int n){
    int min = * arr;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int max(int * arr, int n){
    int max = *arr;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int * ptr = ar;
    printf("%d %d", min(ptr, n), max(ptr, n));
    return 0;
}