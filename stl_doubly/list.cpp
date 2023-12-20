#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> list2 = {1,2,3,4};
    // list<int>my_list(list2);
    // cout << my_list.size();
    // cout << my_list.front();
    vector<int> a = {1, 2, 3, 4};
    list<int> my_list(a.begin(), a.end());
    // for(auto it = my_list.begin(); it != my_list.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int v : my_list)
    {
        cout << v << " ";
    }

    return 0;
}