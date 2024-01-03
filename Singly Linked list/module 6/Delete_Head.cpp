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
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted Head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    cout << "Option 6: Delete head: ";
    int op;
    cin >> op;
    if (op == 6)
    {
        delete_head(head);
    }

    return 0;
}