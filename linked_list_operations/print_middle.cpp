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

int size_of_list(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void print_middle(Node *head)
{
    int size = size_of_list(head);
    int mid = size / 2;
    Node *tmp = head;
    for (int i = 0; i < mid - 1; i++)
    {
        tmp = tmp->next;
    }
    if (size % 2 != 0)
    {
        cout << tmp->value;
    }
    else
    {
        cout << tmp->value << " " << tmp->next->value;
    }
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_reverse(Node * tmp)
{
    // Node * tmp = head;
    if(tmp == NULL){
        // cout << tmp->value << " ";
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->value << " ";
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    // print_middle(head);
    Node * tmp = head;
    print_reverse(head);
    return 0;
}