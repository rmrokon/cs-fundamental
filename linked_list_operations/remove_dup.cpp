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

void delete_dup(Node * head, int val)
{
    Node * tmp2 = head;
    while(tmp2->next != NULL)
    {
        if(tmp2->next->value == val)
        {
            Node * delNode = tmp2->next;
            tmp2->next = delNode->next;
            delete delNode;
        }
        else
        {
            tmp2 = tmp2->next;
        }
    }
}

void remove_duplicate(Node *head)
{
   Node * tmp = head;
   while(tmp != NULL)
   {
        delete_dup(tmp, tmp->value);
        tmp = tmp->next;
   }
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
    remove_duplicate(head);
    print_list(head);
    return 0;
}