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

void inserted_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head successfully" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 4: Insert at head :";
        int op;
        cin >> op;
        if (op == 4)
        {
            int v;
            cout << "Enter value :";
            cin >> v;
            inserted_at_head(head, v);
        }
    }

    return 0;
}