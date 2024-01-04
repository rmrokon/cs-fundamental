#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    queue<int>q;
    int n,m;
    cin >> n >> m;
    if(n != m)
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        for(int i =0; i< n; i++)
        {
            int val;
            cin >> val;
            st.push(val);
        }
        for(int i =0; i< n; i++)
        {
            int val;
            cin >> val;
            q.push(val);
        }
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag) cout << "YES";
        else cout << "NO";
    }
    return 0;
}