#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40, 100, 35, 60, 78};
    // v.erase(v.begin() + 3);

    // for (int x : v)
    // {
    //     cout << x << endl;
    // }

    v.erase(v.begin() + 5, v.begin() + 7);
    cout << "new output" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}