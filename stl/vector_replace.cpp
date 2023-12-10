#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 2, 2, 2, 2, 35, 60, 78, 2, 2};
    replace(v.begin(), v.begin() + 5, 2, 555); // O(N)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}