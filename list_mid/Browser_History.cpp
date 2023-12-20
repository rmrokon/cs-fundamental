#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string value;
        Node * next;
        Node * pre;
    Node(string value)
    {
        this->value=value;
        this->next=NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
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

void insert_at_head(Node *&head, Node *&tail, string val)
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

void print_address(Node * head, Node * &pointer, string address)
{
    if(address == "prev")
    {
        if(pointer->pre == NULL)
        {
            cout<<"Not Available"<<endl;
            return;
        }
        pointer = pointer->pre;
        cout << pointer->value << endl;
    }
    else if(address == "next")
    {
        if(pointer->next == NULL)
        {
            cout<<"Not Available"<<endl;
            return;
        }
        pointer = pointer->next;
        cout << pointer->value << endl;
    }
    else{
        Node * tmp = head;
        while(tmp != NULL)
        {
            if(tmp->value == address)
            {
                cout<<tmp->value<<endl;
                pointer = tmp;
                break;
            }
            if(tmp->next == NULL)
            {
                cout << "Not Available" << endl;
                break;
            }
            tmp = tmp->next;
        }
    }
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while(true)
    {
        string address;
        cin >> address;
        if(address == "end") break;
        insert_at_tail(head, tail, address);
    }
    int num_of_query;
    cin >> num_of_query;
    Node * pointer = head;
    while(num_of_query > 0)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "visit")
        {
            string addr;
            cin >> addr;
            print_address(head, pointer, addr);
        }
        else{
            print_address(head, pointer, cmd);
        }
        num_of_query--;
    }
    return 0;
}