#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int * arr_new = new int[m];
    for (int i = 0; i < n; i++)
    {
        arr_new[i] = arr[i];
    }
    delete arr;
    for (int i = n; i < m; i++)
    {
        cin >> arr_new[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr_new[i] << " ";
    }
    return 0;
}