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

int size_of_list(Node * head)
{
    int count = 0;
    Node * tmp = head;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void delete_head(Node * &head)
{
    Node * delNode = head;
    if(size_of_list(head) == 1)
    {
        head = NULL;
        return;
    }
    head = head->next;
    head->pre = NULL;
    delete delNode;
}

void delete_tail(Node * &tail)
{
    Node * delNode = tail;
    tail = tail->pre;
    tail->next = NULL;
    delete delNode;
}

void delete_from_pos(Node * &head, Node * &tail,int pos)
{
    if(pos == 0)
    {
        delete_head(head);
        return;
    }
    if(pos == size_of_list(head) - 1)
    {
        delete_tail(tail);
        return;
    }
    Node * tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node * delNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre = tmp;
    delete delNode;
    
}

void insert_at_pos(Node * &head,Node * &tail, int pos, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if(pos < 0 || pos > size_of_list(head))
    {
        cout << "Invalid position!" << endl;
    }
    if(pos == 0)
    {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        return;
    }
    if(pos == size_of_list(head))
    {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
        return;
    }
    Node * tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
       tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->pre = tmp;
    newNode->next->pre = newNode;
    tmp->next = newNode;  
}
int main()
{
    Node * head = new Node(20);
    // Node * b = new Node(30);
    // Node * c = new Node(40);

    // head->next = NULL;
    // b->next = c;
    // b->pre = head;
    // c->pre = b;
    Node * tail = head;
    // Node * head = NULL;
    // Node * tail = NULL;

    // insert_at_pos(head,tail, 0, 199);
    // insert_at_pos(head,tail, 1, 200);
    // insert_at_pos(head,tail, 2, 500);
    print_forward(head);
    int pos;
    cin >> pos;
    if(pos >= size_of_list(head))
    {
        cout << "Invalid position";
    }
    else
    {

    delete_from_pos(head, tail, pos);
    print_forward(head);
    }
    // print_reverse(tail);
    
    return 0;
}