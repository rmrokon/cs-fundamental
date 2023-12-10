#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.max_size();

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(1000);
    v.push_back(30);
    cout << "size: " << v.size() << endl;
    v.resize(2);
    v.resize(7, 1);
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}