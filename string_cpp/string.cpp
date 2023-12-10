#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hellodfsdfsdsdfsdfsdfsdfsdfsdfs";
    // str = "Bye";
    cout << str << endl;
    string str2 = "Hello";

    // if(str == str2){
    //     cout << "Same";
    // }else{
    //     cout << "Not same";
    // }

    // cout << str.at(1) << endl;
    // cout << str.size() << endl;
    // cout << str.max_size() << endl;
    // cout << str.capacity() << endl;
    cout << str2.size() << endl;
    str2.clear();
    cout << str2.size() << endl;
    if(str2.empty()) cout << "is empty" << endl;
    if(str.empty()) cout << "is empty" << endl;
    else cout << "Not empty" << endl;

    return 0;
}