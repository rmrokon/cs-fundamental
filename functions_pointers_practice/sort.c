#include<stdio.h>
void sort(int * arr, int n){

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main(){
    int arr[3];
    int sorted_arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        sorted_arr[i] = arr[i];
    }
    int * ptr = sorted_arr;
    sort(ptr, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", sorted_arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}