#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int cls;
        double gpa;
        Student(int roll, int cls, double gpa)
        {
            // (*this).roll = roll;
            // (*this).cls = cls;
            // (*this).gpa = gpa;

            this->cls = cls;
            this->gpa = gpa;
            this->roll = roll;
        }
};

int main()
{
    Student rokon(10, 10, 3.4);
    cout << rokon.cls << endl << rokon.gpa << endl << rokon.roll;
    return 0;
}