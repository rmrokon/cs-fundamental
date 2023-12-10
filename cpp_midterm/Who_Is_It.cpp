#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int uid;
    char name[101];
    char section;
    int total_marks;

    Student(int uid, const char* name, char section, int total_marks)
    {
        this->uid = uid;
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0';
        this->section = section;
        this->total_marks = total_marks;
    }
};

Student * student()
{
    char name[101];
            char section;
            int uid, total_marks;
            cin >> uid >> name >> section >> total_marks;
    Student * s = new Student(uid, name, section, total_marks);
    return s;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
            Student * student_1 = student();
            Student * student_2 = student();
            Student * student_3 = student();

            if(student_1->total_marks >= student_2->total_marks && student_1->total_marks >= student_3->total_marks)
            {
                if(student_1->total_marks == student_2->total_marks && student_1->uid < student_2->uid)
                {
                    cout << student_1->uid << " " << student_1->name << " " << student_1->section << " " << student_1->total_marks << endl;
                }
                else if(student_1->total_marks == student_3->total_marks && student_1->uid < student_3->uid)
                {
                    cout << student_1->uid << " " << student_1->name << " " << student_1->section << " " << student_1->total_marks << endl;
                }else{
                    cout << student_1->uid << " " << student_1->name << " " << student_1->section << " " << student_1->total_marks << endl;
                }
            }
            else if(student_2->total_marks >= student_1->total_marks && student_2->total_marks >= student_3->total_marks)
            {
                if(student_2->total_marks == student_1->total_marks && student_2->uid < student_1->uid)
                {
                    cout << student_2->uid << " " << student_2->name << " " << student_2->section << " " << student_2->total_marks << endl;
                }
                else if(student_2->total_marks == student_3->total_marks && student_2->uid < student_3->uid)
                {
                    cout << student_2->uid << " " << student_2->name << " " << student_2->section << " " << student_2->total_marks << endl;
                }
                else
                {
                    cout << student_2->uid << " " << student_2->name << " " << student_2->section << " " << student_2->total_marks << endl;
                }
            }
            else if(student_3->total_marks >= student_1->total_marks && student_3->total_marks >= student_2->total_marks)
            {
                if(student_3->total_marks == student_2->total_marks && student_3->uid < student_1->uid)
                {
                    cout << student_3->uid << " " << student_3->name << " " << student_3->section << " " << student_3->total_marks << endl;
                }
                else if(student_3->total_marks == student_2->total_marks && student_3->uid < student_1->uid)
                {
                    cout << student_3->uid << " " << student_3->name << " " << student_3->section << " " << student_3->total_marks << endl;
                }
                else
                {
                    cout << student_3->uid << " " << student_3->name << " " << student_3->section << " " << student_3->total_marks << endl;
                }
            }
    }
    return 0;
}