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
void Remove_Duplicate(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {for (Node *j = i; j->next != NULL;)
        {
            if (i->val == j->next->val)
            {
                Node *tmp = j->next;
                j->next = j->next->next;
                delete tmp;
            }
            else
            {
                j = j->next;
            }
        }
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    Remove_Duplicate(head);
    Print_Linked_List(head);
    return 0;
}