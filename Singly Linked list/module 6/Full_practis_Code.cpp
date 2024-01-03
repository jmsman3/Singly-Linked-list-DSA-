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
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NotunNode;
    cout << endl
         << "Inserted at Tail " << endl
         << endl;
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
    cout << endl
         << endl;
}
void insert_at_Position(Node *head, int pos, int v) // Jekono position e insert korsi
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << "inserted Successfully at any position " << endl
         << endl;
}
void inserted_delam_head(Node *&head, int v) // Shudhu head e nesi
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "successfully inserted at head :" << endl
         << endl;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) // delet er jonno dui jaigai error check kore lagbe
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp == NULL) // delet er jonno dui jaigai error check kore lagbe
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Node Delete Successful from Position" << endl
         << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not availabe " << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head Successfully" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail :- " << endl;
        cout << "Option 2: Print Linked List :- " << endl;
        cout << "Option 3: Inserted at Position: " << endl;
        cout << "Option 4: Inserted at head : " << endl;
        cout << "Option 5: Detete from any Position : " << endl;
        cout << "Option 6: Detete Head : " << endl;
        cout << "Option 7: Terminate Koro :- " << endl;

        int op;
        cin >> op;
        if (op == 1) // tail er jonno
        {
            cout << "Please enter a value:- ";
            int v;
            cin >> v;
            inser_at_tail(head, v);
        }
        else if (op == 2) // linked list print korar jonno
        {
            Print_linked_list(head);
        }
        else if (op == 3) // any position er jonno
        {
            int pos, v;
            cout << "Enter Position:" << endl;
            cin >> pos;
            cout << "Enter Value:" << endl;
            cin >> v;
            if (pos == 0)
            {
                inserted_delam_head(head, v);
            }
            else
            {
                insert_at_Position(head, pos, v);
            }
        }
        else if (op == 4) // shudhu head er jonno
        {
            int v;
            cout << "Enter Value:";
            cin >> v;
            inserted_delam_head(head, v);
        }
        else if (op == 5) // delete any position
        {
            int pos;
            cout << "Enter Your Postion :";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}