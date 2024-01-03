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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_index(Node *&head, int index, int v)
{
    if (index < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (index == 0)
    {
        insert_at_head(head, v);
        print_linked_list(head);
        return;
    }

    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 0; i < index - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    print_linked_list(head);
}

int main()
{
    Node *head = NULL;
    int val;

    cout << "Enter elements for the linked list (-1 to stop):" << endl;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--)
    {
        int index, val;
        cout << "Enter index and value for insertion: ";
        cin >> index >> val;
        insert_at_index(head, index, val);
    }

    return 0;
}
