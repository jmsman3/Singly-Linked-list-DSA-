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
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{   
    Node* head = NULL; 
    int op; cin>>op;
    if (op == 5)
    {
        int pos;
        cout << "Enter Your Position: ";
        cin >> pos;
        delete_from_position(head, pos);
    }

    return 0;
}