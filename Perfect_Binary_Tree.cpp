#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<pair<Node *, int>> v,v3;
vector<Node*>v2;
Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<pair<Node *, int>> q;
    q.push({root, 1});
    v.push_back({root, 1});
    while (!q.empty())
    {
        pair<Node *, int> pa = q.front();
        Node *p = pa.first;
        int la = pa.second;
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myl;
        Node *myr;
        if (l == -1)
        {
            myl = NULL;
        }
        else
        {
            myl = new Node(l);
        }
        if (r == -1)
        {
            myr = NULL;
        }
        else
        {
            myr = new Node(r);
        }
        p->left = myl;
        p->right = myr;
        if (p->left)
        {
            q.push({p->left, la + 1});
            v.push_back({p->left, la + 1});
        }
        if (p->right)
        {
            q.push({p->right, la + 1});
            v.push_back({p->right, la + 1});
        }
    }
    return root;
}

int main()
{
    Node *root = input();
    int sz=v.size();
    int l=v[sz-1].second;
    int total=pow(2,l)-1;
    if(sz==total)
    {
       cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}