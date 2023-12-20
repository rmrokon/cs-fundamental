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

// int size_of_list(Node *head)
// {
//     int count = 0;
//     Node *tmp = head;

//     while (tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     return count;
// }

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

bool is_palindrome(Node * head, Node * tail)
{
    Node * i = head;
    Node * j = tail;
    bool flag = true;

    while(i != j && i->next != j)
    {
        if(i->value != j->value)
        {
            flag = false;
        }
        i = i->next;
        j = j->pre;
        if(i->next == j && i->value != j->value)
        {
            flag = false;
        }
    }
    return flag;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_1, tail_1, val);
    }

    if(is_palindrome(head_1, tail_1))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}