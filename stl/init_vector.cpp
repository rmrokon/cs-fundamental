#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Type 1
    // vector<int>v;
    // cout << v.size();

    // Type 2

    vector<int> v(5, 20);
    // cout << v.size() << endl;;

    // for (int i = 0; i < v.size() -1; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // Type 3

    // vector<int>v2(v);
    // for (int i = 0; i < v.size() -1; i++)
    // {
    //     cout << v2[i] << endl;
    // }

    int size = 5;

    int a[size] = {1, 2, 3, 4, 5};

    vector<int> v3(a, a + size);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v3[i] << endl;
    }
    
    return 0;
}