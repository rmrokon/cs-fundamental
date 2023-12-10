#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    if(n != m){
        printf("NO");
    }else{
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < m; j++)
           {
                scanf("%d", &arr[i][j]);
           }
           
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < m; j++)
           {
               if(i == j && arr[i][j] != 1)
               {
                    flag = 0;
                    break;
               }
               if(j == m - 1 - i && arr[i][j] != 1){
                    flag = 0;
                    break;
               }
               if(i != j && j != m - 1 - i && arr[i][j] != 0){
                    flag = 0;
                    break;
               }
           }
           if(flag == 0){
            printf("NO");
            break;
           }  
        }
        if(flag == 1){
            printf("YES");
        }
        
    }
    return 0;
}