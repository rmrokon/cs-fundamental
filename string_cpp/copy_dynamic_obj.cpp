#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string name, int age)
        {
           this->name = name;
           this->age = age;
        }
};
int main()
{
    Person * rakib = new Person("Rakib", 20);
    Person * sakib = new Person("Sakib", 25);
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << endl;
    // cout << sakib->name << " " << endl;

    return 0;
}