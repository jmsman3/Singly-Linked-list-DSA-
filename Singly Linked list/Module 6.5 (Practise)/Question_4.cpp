#include <bits\stdc++.h>
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
void insert_at_tail(Node *&head, int v) // Tail Insert
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
void print_linked_list(Node *head) // Linked List Print kora
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_head(Node *&head, int v) // HEAD_Insert
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int size_of(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_index(Node *&head, int index, int v) // Position e insert
{
    if (index > size_of(head))
    {
        cout << "Invalid" << endl;
    }
    else if (index == 0)
    {
        insert_at_head(head, v);
        print_linked_list(head);
    }
    else if (index == size_of(head))
    {
        insert_at_tail(head, v);
        print_linked_list(head);
    }
    else
    {
        Node *newNode = new Node(v);
        Node *tmp = head;

        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }

        newNode->next = tmp->next;
        tmp->next = newNode;
        print_linked_list(head);
    }
}

int main()
{
    Node *head = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int index, val;
        cin >> index;
        cin >> val;
        insert_at_index(head, index, val);
    }
    return 0;
}