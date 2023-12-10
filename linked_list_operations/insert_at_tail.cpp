#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node * next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_at_tail(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
    }
    else 
    {
        Node * tmp = head;

    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    }
}

int main()
{
    Node * a = new Node(10);
    a=NULL;
    insert_at_tail(a, 20);
    cout << a->value<<endl<< a->next->value<<endl;
    return 0;
}