#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *pre;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_recussively(Node *head)
{
    if (head == NULL)
        return;
    print_recussively(head->next);
    cout << head->value << " ";
}

void reverse(Node * head, Node * tail)
{
    Node * i = head;
    Node * j = tail;

    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->pre;
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    print_list(head);
    // print_recussively(head);
    reverse(head, tail);
    print_list(head);
    return 0;
}