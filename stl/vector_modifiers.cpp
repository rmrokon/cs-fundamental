#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v = {10, 20, 30, 40};
    vector<int>v2 = {1, 2, 3, 4, 5};
    // vector<int>x = {20, 30, 40};
    // v = x;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    v.insert(v.begin() + 2, v2.begin(), v2.end()); // O(N + K)
    for(int x: v)
    {
        cout << x << endl;
    }
    

    return 0;
}