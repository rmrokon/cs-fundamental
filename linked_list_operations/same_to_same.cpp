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
int size_of_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

bool are_same(Node *head_1, Node *head_2)
{
    if (size_of_list(head_1) != size_of_list(head_2))
    {
        return false;
    }
    bool same = true;
    Node * j = head_2;
    for (Node *i = head_1; i != NULL; i = i->next)
    {
        if(i->value != j->value)
        {
            same = false;
            break;
        }
        j = j->next;   
    }
    return same;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_1, tail_1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_2, tail_2, val);
    }

    if (are_same(head_1, head_2))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}