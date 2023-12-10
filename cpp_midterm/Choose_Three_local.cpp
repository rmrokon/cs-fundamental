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
        int k = 0;
        for (int i = 0; i < n - 2; i++)
        {
            k = i + 2;
            if(possible == 1){
                        break;
                    }
            for (int j = i + 1; j < n - 1; j++)
            {
                if(possible == 1){
                        break;
                    }
                if(arr[i] + arr[j] + arr[k] == sum)
                {
                        cout << "YES" << endl;
                        possible = 1;
                        break;
                }
                k++;  
            }
               
        }
        /*
            i = 0, k = 2, j = 1 --> 1 + 2 + 3 != 10
            i = 0, k = 3, j = 2 --> 1 + 3 + 4 != 10
            i = 0, k = 4, j = 3 --> 1 + 4 + 5 = 10

        */
        if(possible == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}