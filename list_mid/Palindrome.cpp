#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(list<int>l, list<int>k)
{
    auto k_it = k.begin();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if(*it != *k_it)
        {
           return false;
        }
        k_it++;
    }
    return true;
}
int main()
{
    list<int>l;
    list<int>k;
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        l.push_back(val);
        k.push_back(val);
    }
    k.reverse();
    bool result = is_palindrome(l, k);
    if(result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}