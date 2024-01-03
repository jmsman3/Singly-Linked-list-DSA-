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

void insert_at_Position(Node *head, int pos, int v) // Jekono position e insert korsi
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << "inserted Successfully at any position " << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    cout << "Option 3: Inserted at Position: ";
    int op;
    cin >> op;
    if (op == 3)
    {
        int pos, v;
        cout << "Enter Position:" << endl;
        cin >> pos;
        cout << "Enter Value:" << endl;
        cin >> v;
        insert_at_Position(head, pos, v);
    }

    return 0;
}