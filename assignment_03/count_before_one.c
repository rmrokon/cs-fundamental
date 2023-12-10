#include<stdio.h>

int count_before_one(int * arr, int size_of_arr)
{
    int count = 0;
    for (int i = 0; i < size_of_arr; i++)
    {
        if(arr[i] == 1){
            break;
        }
        count++;
    }
    return count;
    
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int * ptr = arr;
    int count = count_before_one(ptr, n);
    printf("%d", count);
    return 0;
}