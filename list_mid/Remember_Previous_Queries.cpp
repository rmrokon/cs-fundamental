#include<bits/stdc++.h>
using namespace std;

void print_reverse(list<int>l)
{
    for (auto rit = l.crbegin(); rit != l.crend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;
}

void print_forward(list<int>l)
{
    for(int v:l)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    list<int>l;
    int queries;
    cin >> queries;
    while(queries > 0)
    {
        int x,v;
        cin >> x>>v;
        if(x == 0)
        {
            l.push_front(v);
        }
        else if(x == 1)
        {
            l.push_back(v);
        }
        else if(x == 2)
        {
            if(v < l.size())
            {
                l.erase(next(l.begin(), v));
            }
        }
        cout << "L -> ";
        print_forward(l);
        cout << "R -> ";
        print_reverse(l);
        queries--;
    }
    
    return 0;
}