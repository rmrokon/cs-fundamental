#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, sum;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> sum;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int possible = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                   if(arr[i] + arr[j] + arr[k] == sum)
                   {
                    possible = 1;
                   }
                }  
            }
                 
        }
        if(possible == 0)
        {
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}