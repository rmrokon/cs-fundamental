#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
};

int main()
{
    int num_of_students;
    cin >> num_of_students;
    Student s[num_of_students];
    for (int i = 0; i < num_of_students; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id;
    }
    int j = num_of_students - 1;
    for (int i = 0; i < j; i++)
    {
        swap(s[i].sec, s[j].sec);
        j--;
    }
    for (int i = 0; i < num_of_students; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << endl;
    }
    
    
    
    return 0;
}