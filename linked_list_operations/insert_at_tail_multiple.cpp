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

void insert_at_tail(Node * &head)
{
    while(true)
    {
        int optn;
    cout << "option 1 --> insert a new value" << endl;
    cout << "option 2 --> print values" << endl;
    cout << "option 3 --> terminate" << endl;
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
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
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