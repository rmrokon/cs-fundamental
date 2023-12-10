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

int find_x(Node *head, int x)
{
    int index = 0;
    bool found = false;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value == x)
        {
            found = true;
            break;
        }
        index++;
    }
    return found ? index : -1;
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
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
        int x;
        cin >> x;
        cout << find_x(head, x) << endl;
    }

    return 0;
}