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
void Insert_at_tail(Node *&head, Node *&tail, int val) // tail banalam
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

int find_SORBOCCHO_value(Node *head) // Max er jonno
{
    int maximum_value = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > maximum_value)
        {
            maximum_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return maximum_value;
}
int find_SORBoNImno_value(Node *head) // Min er jonno
{
    int minimum_value = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < minimum_value)
        {
            minimum_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return minimum_value;
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
        Insert_at_tail(head, tail, val);
    }
     int Parthokko = (find_SORBOCCHO_value(head)) - (find_SORBoNImno_value(head));
        cout << Parthokko << endl;

    return 0;
}