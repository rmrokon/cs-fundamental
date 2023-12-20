#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        l.push_back(val);
    }
    l.sort();
    auto it = l.begin();
    while(true)
    {
        if(it == l.end()) break;
        if()
    }
    for(int v:l)
    {
        cout << v << " ";
    }
    return 0;
}