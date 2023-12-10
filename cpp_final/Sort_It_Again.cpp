#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp (Student a, Student b)
{
    if(a.eng_marks == b.eng_marks)
    {
        if(a.math_marks == b.math_marks)
        {
            return a.id < b.id;
        }
        else
        {
            return a.math_marks > b.math_marks;
        }
    }
    else
    {
        return a.eng_marks > b.eng_marks;
    }
}

int main()
{
    int num_of_students;
    cin >> num_of_students;
    Student s[num_of_students];
    for (int i = 0; i < num_of_students; i++)
    {
       cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }
    sort(s, s + num_of_students, cmp);

    for (int i = 0; i < num_of_students; i++)
    {
       cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }
    return 0;
}