#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr_a[n], arr_b[n], arr_c[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr_a[j]);
            arr_b[j] = arr_a[j];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if(arr_b[j] > arr_b[k])
                {
                    int tmp = arr_b[j];
                    arr_b[j] = arr_b[k];
                    arr_b[k] = tmp;
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            arr_c[j] = abs(arr_a[j] - arr_b[j]);
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr_c[j]);
        }
        printf("\n"); 
    }
    
    return 0;
}