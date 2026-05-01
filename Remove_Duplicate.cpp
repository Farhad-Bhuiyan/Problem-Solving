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
    while (1)
    {
        int v;
        cin >> v;
        if(v==-1)
        {
            break;
        }
        else
        {
            insert_tail(head,tail,v);
        }
    }
    
    Node* first=head;
    while(first!=NULL && first->next!=NULL)
    {
        Node* second=first;
        while(second->next!=NULL)
        {
             if(first->value==second->next->value)
             {
                Node* del=second->next;
                second->next=second->next->next;
                delete del;
             }
             else
             second=second->next;
        }
        first=first->next;
    }
    print(head);
    return 0;
}