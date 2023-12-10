#include<stdio.h>

int main(){
    int size_of_arr;
    scanf("%d", &size_of_arr);
    int arr[size_of_arr];
    int count_for_2 = 0;
    int count_for_3 = 0;
    for (int i = 0; i < size_of_arr; i++)
    {
        
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0 && arr[i]%3 ==0)
        {
            count_for_2++;
        }
        else if(arr[i]%2 == 0)
        {
            count_for_2++;
        }
        else if(arr[i]%3 == 0)
        {
            count_for_3++;
        }
    }
    printf("%d %d", count_for_2, count_for_3);

    
    return 0;
}