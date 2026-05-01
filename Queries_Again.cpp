#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val, int x)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    if (temp == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    if(x==0 && head!=NULL)
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        return;
    }
    for (int i = 0; i <x - 1; i++)
    {
        temp = temp->next;
    }
    if(temp==tail)
    {
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
void printforward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int printback(Node *tail)
{
    int cou=0;
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
        cou++;
    }
    return cou;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (sz < x)
        {
            cout << "Invalid" << endl;
            continue;
        }
        insert(head, tail, v, x);
        cout << "L -> ";
        printforward(head);
        cout << endl;
        cout << "R -> ";
        sz = printback(tail);
        cout << endl;
    }
    return 0;
}