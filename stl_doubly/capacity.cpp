#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> my_List)
{
    for(auto it = my_List.begin(); it != my_List.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    list<int> my_List = {10, 20, 30, 40, 50};
    // cout << my_List.size() << endl;
    // my_List.clear();a
    // my_List.resize(2);
    // cout << my_List.size() << endl;
    list<int> new_list;
    new_list = my_List;
    print_list(new_list);
    return 0;
}