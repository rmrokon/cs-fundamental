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
        this->pre=NULL;

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
            Node * new_node = new Node(val);
            if(head == NULL)
            {
                head = new_node;
                tail = new_node;
                return;
            }
            tail->next = new_node;
            new_node->pre = tail;
            tail = new_node;
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
    myStack st;
    int n;
    cin >> n;
    for(int i =0; i< n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}