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

int size_of_list(Node *head)
{
    int count = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (tail == NULL)
    {
        tail = new_node;
        head = new_node;
        return;
    }
    tail->next = new_node;
    new_node->pre = tail;
    tail = new_node;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        tail = new_node;
        head = new_node;
        return;
    }
    new_node->next = head;
    head->pre = new_node;
    head = new_node;
}

// void insert_at_pos(Node * head, Node * tail, int pos, int val)
// {

// }

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

bool are_same(Node *head_1, Node *head_2)
{
    // cout << size_of_list(head_1) << endl;
    // cout << size_of_list(head_2) <<endl;
    if (size_of_list(head_1) != size_of_list(head_2))
    {
        return false;
    }
    Node *j = head_2;
    for (Node *i = head_1; i != NULL && j != NULL; i = i->next)
    {
        cout << "i - " << i->value << " "
             << "j - " << j->value << endl;
        if (i->value != j->value)
        {
            return false;
        }
        j = j->next;
    }
    return true;
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
    // cout << "printing" << endl;
    // print_list(head_1);
    // print_list(head_2);

    bool are_lists_same = are_same(head_1, head_2);
    if (are_lists_same)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}