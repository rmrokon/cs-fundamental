#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int * a = new int;
    *a = 1000;
    return a;
}
int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    float *b = new float;
    *b = 100.50;
    cout << *b << endl;
    int * d = fun();
    cout << *d << endl;
    return 0;
}