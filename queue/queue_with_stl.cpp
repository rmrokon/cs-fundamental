#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> q;

    void push(int val)
    {
        q.push_back(val);
    }

    void pop()
    {
        q.pop_front();
    }

    int front()
    {
        return q.front();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}