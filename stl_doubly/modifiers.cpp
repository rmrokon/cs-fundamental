#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> my_List)
{
    for (auto it = my_List.begin(); it != my_List.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> my_List = {10, 20, 30, 40, 50, 30, 30, 60};
    // cout << my_List.size() << endl;
    // my_List.clear();a
    // my_List.resize(2);
    // cout << my_List.size() << endl;
    // list<int> new_list;
    // new_list = my_List;
    // my_List.insert(next(my_List.begin(), 2), 444);
    print_list(my_List);
    my_List.erase(next(my_List.begin(),2));
    print_list(my_List);
    // replace(my_List.begin(), my_List.end(), 30, 99);
    // auto it = find(my_List.begin(), my_List.end(), 199);
    // if(it == my_List.end())
    // {
    //     cout << "Not Found";
    // }
    // else
    // {
    //     cout << "Found";
    // }
    // print_list(my_List);
    return 0;
}