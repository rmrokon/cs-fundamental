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

int main()
{
    Node a(20);
    Node b(50);

    a.next = &b;

    // a.next = &b;
    // b.next = NULL;

    cout << a.value << endl;
    // cout << (*a.next).value;
    cout << a.next->value ;
    return 0;
}