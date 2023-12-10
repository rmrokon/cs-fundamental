#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 2, 2, 2, 2, 35, 60, 78, 2, 2};
    auto it = find(v.begin(), v.end(), 350); // O(N)
    if (it == v.end())
        cout << "Not found";
    else
        cout << *it;
    return 0;
}