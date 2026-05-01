#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long value;
    Node *next;

    Node(long long x)
    {
        this->value = x;
        this->next = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void delete_node(Node *&head, Node *&tail, int idx)
{
    if (head == NULL) return;
    if (idx == 0)
    {
        Node* del=NULL;
        del = head;
        head = head->next;
        delete del;
        if (head == NULL)
            tail = NULL;
    }
    else
    {
        Node* temp=head;
        for (int i = 0; i < idx - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        delete del;
        if(temp->next==NULL)
        {
            tail=temp;
        }
    }
}
void print(Node* &head)
{
   Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q, co = 0;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
            co++;
            print(head);
            cout << endl;
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
            co++;
            print(head);
            cout << endl;
        }
        else
        {
            Node *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            if (v >= 0 && v < count)
            {
                delete_node(head, tail, v);
            }
            print(head);
            cout << endl;
        }
    }
    return 0;
}