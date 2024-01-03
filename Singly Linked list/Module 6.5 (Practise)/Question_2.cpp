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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

bool Duplicate_check(Node *head, int v)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == v)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    int val;
    cout << endl
         << "Enter Value: ";
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
        bool found = false;
        if (Duplicate_check(head, val))

        {
            cout << "YES" << endl;
            found = true;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
