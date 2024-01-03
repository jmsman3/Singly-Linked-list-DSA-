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
void insert_at_tail(Node *&head, int v) // tail void
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;

}
void print_Linked_list(Node *head) // Liniked list print void
{
    cout << "Your Linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: Print Linked list" << endl;
        cout << "Option 3: Terminate" << endl;
        cout << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter a value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)

        { 
            print_Linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}