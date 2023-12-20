#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;

        void push(int val)
        {
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }

        int top()
        {
            return v.back();
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            return v.size() == 0;
        }
};

int main()
{
    myStack st;
    while(true)
    {
        int x;
        cin >> x;
        if(x == -1) break;
        st.push(x);

    }
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    // if(!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    //     cout << st.top() << endl;
    // }

    return 0;
}