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

void insert_at_tail(Node * &head, int val)
{
    Node * tmp = head;
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int size(Node * head)
{
    int size = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

bool duplicate(Node * head)
{
    Node * tmp = head;
    int arr[101] = {0};
    bool dup = false;
    
    while(tmp != NULL)
    {
        arr[tmp->value]++;
        tmp = tmp->next;
    }

    for (int i = 0; i < 101; i++)
    {
       if(arr[i] > 1)
       {
        dup = true;
        break;
       }
    }
     
    return dup;
}

int main()
{
    int val;
    Node * head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    if(duplicate(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}