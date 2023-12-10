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
void print_forward(Node * head)
{
    Node * tmp = head;
     while (tmp != NULL)
    {
       cout << tmp->value << " ";
       tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node * tail)
{
    Node * tmp = tail;
     while (tmp != NULL)
    {
       cout << tmp->value << " ";
       tmp = tmp->pre;
    }
    cout << endl;
}
int main()
{
    Node * head = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);

    head->next = b;
    b->next = c;
    b->pre = head;
    c->pre = b;
    Node * tail = c;
    print_forward(head);
    print_reverse(tail);
    
    return 0;
}