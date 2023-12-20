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

void insert_at_position(Node * &head, Node * &tail, int pos, int val)
{
    if(pos == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    if(pos == size_of_list(head))
    {
        insert_at_tail(head, tail, val);
        return;
    }
    Node * new_node = new Node(val);
    Node * tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
       tmp = tmp->next;
    }
    new_node->next = tmp->next;
    new_node->pre = tmp;
    new_node->next->pre = new_node;
    tmp->next = new_node; 
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num_of_queries;
    cin >> num_of_queries;
    while(num_of_queries > 0)
    {
        int v,x;
        cin >> x>>v;
        if(x > size_of_list(head))
        {
            cout << "Invalid" << endl;
        }
        else{
            insert_at_position(head, tail, x, v);
            cout << "L -> ";
            print_list(head);
            cout << "R -> ";
            print_reverse(tail);
        }
        num_of_queries--;
    }
   
    return 0;
}