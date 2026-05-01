#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class mystack
{
    public:
    Node *head=NULL;
    Node *tail=NULL;

    void push(int val)
    {
        Node *newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->prev=tail;
        tail->next=newnode;
        tail=tail->next;
    }

    void pop()
    {
        Node *del=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else
        {
            tail->next=NULL;
        }
        delete del;
    }

    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        if(head==NULL && tail==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class myqueue
{
    public:
    Node *head=NULL;
    Node *tail=NULL;

    void push(int val)
    {
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->prev=tail;
        tail->next=newnode;
        tail=tail->next;
    }

    void pop()
    {
        Node *del=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        else
        {
            head->prev=NULL;
        }
        delete del;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        if(head==NULL && tail==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myqueue qu;
    mystack st;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int d;
        cin >> d;
        st.push(d);
    }
    for(int j=0;j<m;j++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    if(n!=m)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool mk=true;
    while(!st.empty())
    {
        if(st.top()!=qu.front())
        {
            mk=false;
            break;
        }
        st.pop();
        qu.pop();
    }
    if(mk)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}