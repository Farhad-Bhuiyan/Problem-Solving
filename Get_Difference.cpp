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

int main()
{
    Node* head = NULL;
    while(1)
    {
        long long v;
        cin >> v;
        if(v==-1)
        {
            break;
        }
        else
        {
            Node* newnode= new Node(v);
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                newnode->next=head;
                head=newnode;
            }
        }
    }
    long long min=LONG_MAX,max=LONG_MIN;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->value > max)
        {
            max=temp->value;
        }
        if(temp->value < min)
        {
            min=temp->value;
        }
        temp=temp->next;
    }
    cout << abs(max-min) << endl;
    return 0;
}