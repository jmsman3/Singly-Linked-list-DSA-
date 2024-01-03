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
void inser_at_tail(Node *&head, int v) // tail nesi
{
    Node *NotunNode = new Node(v);
    if (head == NULL)
    {
        head = NotunNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NotunNode;
}
void Print_linked_list(Node *head) // Linked list print korsi
{
    cout << "Your Linked List:-";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        inser_at_tail(head, val);
    }
    Print_linked_list(head);
    return 0;
}