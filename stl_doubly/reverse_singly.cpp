#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print_recussively(Node *head)
{
    if (head == NULL)
        return;
    print_recussively(head->next);
    cout << head->value << " ";
}

void reverse(Node * &head, Node * curr)
{
    if(curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next=NULL;
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

    head->next = a;
    a->next = b;
    print_list(head);
    // print_recussively(head);
    reverse(head, head);
    print_list(head);
    return 0;
}