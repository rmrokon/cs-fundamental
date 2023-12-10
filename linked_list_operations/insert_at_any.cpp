#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node * next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_at_position(Node * &head, int pos,int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    if(pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_tail(Node * &head)
{
    while(true)
    {
        int optn;
    cout << "option 1 --> insert a new value" << endl;
    cout << "option 2 --> print values" << endl;
    cout << "option 3 --> insert at position" << endl;
    cout << "option 4 --> terminate" << endl;
    cin >> optn;
    if(optn == 1)
    {
        int val;
        cin >> val;
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node * tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    else if(optn == 2)
    {
        cout << "Your list: " << endl;
        Node * tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->value << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    else if(optn == 3)
    {
        int pos, val;
        cout << "Enter position: " << endl;
        cin >> pos;
        cout << "Enter value: " << endl;
        cin >> val;
        insert_at_position(head, pos, val);
    }
    else
    {
        break;
    }  
    }
}

int main()
{
    Node * head = new Node(19);
    insert_at_tail(head);
    return 0;
}