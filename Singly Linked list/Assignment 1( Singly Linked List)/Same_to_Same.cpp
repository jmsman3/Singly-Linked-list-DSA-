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
bool Linked_List_Compare_Kora(Node *head_1, Node *head_2)
{
    while (head_1 != NULL && head_2 != NULL)
    {
        if (head_1->val != head_2->val)
        {
            return false;
        }
        head_1 = head_1->next;
        head_2 = head_2->next;
    }
    return head_1 == NULL && head_2 == NULL;
}

void insert_at_tail_1(Node *&head_1, Node *&tail_1, int v) // Prothom tail insert neyechi
{
    Node *newNode = new Node(v);
    if (head_1 == NULL)
    {
        head_1 = newNode;
        tail_1 = newNode;
        return;
    }
    tail_1->next = newNode;
    tail_1 = newNode;
}

void insert_at_tail_2(Node *&head_2, Node *&tail_2, int v) // Second tail insert Neyechi
{
    Node *newNode = new Node(v);
    if (head_2 == NULL)
    {
        head_2 = newNode;
        tail_2 = newNode;
        return;
    }
    tail_2->next = newNode;
    tail_2 = newNode;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int val;
    for (int i = 0; i < 1000; i++) // Prosno onujayee...max number of node 1000 ta
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail_1(head_1, tail_1, val); // Prothom tial Call korlam
    }

    for (int i = 0; i < 1000; i++)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail_2(head_2, tail_2, val); // abar Second tail call korlam
    }

    if (Linked_List_Compare_Kora(head_1, head_2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}