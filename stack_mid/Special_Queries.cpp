#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string value;
        Node * next;
    Node(string value)
    {
        this->value=value;
        this->next=NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(string val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
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
        Node *delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    string front()
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
    int queries;
    cin >> queries;
    myQueue q;

    while(queries > 0)
    {
        int x;
        string s;
        cin >> x;
        if(x == 0)
        {
            cin >> s;
            q.push(s);
        }
        if(x == 1)
        {
            if(q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        queries--;
    }
    return 0;
}