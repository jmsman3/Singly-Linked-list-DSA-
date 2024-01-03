#include <bits/stdc++.h>
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
void Insert_at_tail(Node *&head, Node *&tail, int val)
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
int Check_Index_x(Node *head, int x) // X ache kink check.
{

    int flag = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == x)
        {
            return flag;
        }
        flag++;
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        for (int i = 0; i < 100000; i++)
        {
            cin >> val;
            if (val == -1)
                break;
            Insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        int Index_paisi = Check_Index_x(head, x);
        cout << Index_paisi << endl;
    }

    return 0;
}