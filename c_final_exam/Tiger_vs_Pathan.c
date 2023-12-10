#include<stdio.h>

int main(){
    int t,n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        char rounds[n];
        scanf("%s", rounds);
        int tiger = 0, pathaan = 0;

        for (int j = 0; j < n; j++)
        {
            if(rounds[j] == 'T'){
                tiger++;
            }else{
                pathaan++;
            }
        }

        if(tiger > pathaan){
            printf("Tiger\n");
        }
        else if(tiger < pathaan){
            printf("Pathaan\n");
        }
        else {
            printf("Draw\n");
        }
        
    }
    
    return 0;
}