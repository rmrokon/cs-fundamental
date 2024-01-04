#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node * next;
        Node * pre;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
        this->pre = NULL;
    }
};

class myStack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;

        void push(int val)
        {
            sz++;
            Node * newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }

        void pop()
        {
            sz--;
            Node * delNode = tail;
            tail = tail->pre;
            if(tail == NULL)
            {
                head = NULL;
            }
            if(tail != NULL)
            {
                tail->next = NULL;
            }
            delete delNode;  
        }

        int top()
        {
            return tail->value;
        }

        int size()
        {
            return sz;
        }

        bool empty()
        {
            return sz == 0;
        }
};

int main()
{
    int test_cases;
    cin >> test_cases;

    while(test_cases > 0)
    {
        myStack st;
        string s;
        cin >> s;
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
                continue;
            }
            if(c == '0' && st.top() == '0')
            {
                st.push(c);
            }
            else if(c == '0' && st.top() == '1')
            {
                // cout << "removing - " << st.top() << endl;
                st.pop();
            }
            if(c == '1' && st.top() == '1')
            {
                st.push(c);
            }
            else if(c == '1' && st.top() == '0')
            {
                // cout << "removing - " << st.top() << endl;
                st.pop();
            }

        }

        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
        test_cases--;
    }

    return 0;
}