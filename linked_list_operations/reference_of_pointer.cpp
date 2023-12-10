#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    p = NULL;
}

int main()
{
    int p = 10;
    int *ptr = &p;
    fun(ptr);
    cout << ptr;
    return 0;
}