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
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int Size_of_the_linked_list(Node *head)
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
int main()
{
    int v;
    Node *head = NULL;
    cout << "Enter Value:";
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        insert_at_tail(head, v);
    }

    cout << endl;
    int size = Size_of_the_linked_list(head);
    cout << "Your Linked List Size: " << size << endl;
    return 0;
}