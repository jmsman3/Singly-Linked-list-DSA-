#include <iostream>
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
void print_middle_elements(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty Linked List";
        return;
    }
    Node *middle_1 = head;
    Node *middle_2 = head;
    Node *pre_middle_1 = NULL;

    while (middle_2 != NULL && middle_2->next != NULL)
    {
        pre_middle_1 = middle_1;
        middle_1 = middle_1->next;
        middle_2 = middle_2->next->next;
    }

    if (middle_2 = NULL) // even case
    {
        cout << pre_middle_1->val << " " << middle_1->val << endl;
    }
    else // odd case
    {
        cout << middle_1->val << endl;
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

    print_middle_elements(head);

    return 0;
}
