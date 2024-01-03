#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
        tail = head;
}

void delete_from_index(Node *&head, int pos)
{
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else if ( pos >0)
    {
        Node *tmp = head;
        for (int i = 1; i < pos && tmp != NULL; i++)
        {
            tmp = tmp->next;
        }
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}

void Print_Linked_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head,  v);
        }
        else if (x == 2)
        {
            delete_from_index(head, v);
        }

        Print_Linked_List(head);
    }

    return 0;
}
