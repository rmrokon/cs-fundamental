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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int find_min(Node *head)
{
    Node *tmp = head;
    int min = tmp->value;
    for (Node *i = tmp->next; i != NULL; i = i->next)
    {
        if (i->value < min)
        {
            min = i->value;
        }
    }
    return min;
}

int find_max(Node *head)
{
    Node *tmp = head;
    int max = tmp->value;
    for (Node *i = tmp->next; i != NULL; i = i->next)
    {
        if (i->value > max)
        {
            max = i->value;
        }
    }
    return max;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    cout << find_max(head) - find_min(head);
    return 0;
}