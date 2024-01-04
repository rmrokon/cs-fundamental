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

class myQueue
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
            tail = newNode;
        }

        void pop()
        {
            sz--;
            Node * delNode = head;
            head = head->next;
            if(head == NULL)
            {
                tail = NULL;
                delete delNode; 
                return;
            }
            head->pre = NULL;
            delete delNode;  
        }

        int front()
        {
            return head->value;
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
    myQueue q;
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

        for(int i =0; i< m; i++)
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