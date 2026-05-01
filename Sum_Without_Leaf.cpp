#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1)
    {
        root=NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node *myl;
        Node *myr;
        if(l==-1)
        {
            myl=NULL;
        }
        else
        {
            myl=new Node(l);
        }
        if(r==-1)
        {
            myr=NULL;
        }
        else
        {
            myr=new Node(r);
        }
         p->left=myl;
         p->right=myr;
        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int add(Node *root, int sum)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left || root->right )
    {
        sum+=root->val;
    }
    sum += add(root->left,0);
    sum += add(root->right,0);
    return sum;
}
int main()
{
    Node *root = input();
    int sum=add(root,0);
    cout << sum << endl;
    return 0;
}