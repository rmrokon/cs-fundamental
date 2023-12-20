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
    list<int> my_list = {40, 100, 30, 70, 10, 10};
    // my_list.remove(10);
    // my_list.sort();
    // my_list.sort(greater<int>());
    // my_list.sort();
    // my_list.unique();
    // my_list.reverse();
    // print_list(my_list);
    // cout << my_list.front() << endl;
    // cout << my_list.back() << endl;
    cout << * next(my_list.begin(), 2) << endl;
    return 0;
}