#include<bits/stdc++.h>
using namespace std;

int main()
{
    string names;
    string name;
    getline(cin, names);
    stringstream name_strim(names);
    int flag = 0;
    while (name_strim >> name)
    {
        if(name == "Jessica")
        {
            cout << "YES";
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "NO";
    }
    return 0;
}