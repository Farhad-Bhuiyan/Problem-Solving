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
vector<pair<Node *, int>> v,v2;
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
    q.push({root, 0});
    v.push_back({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pa = q.front();
        Node *p = pa.first;
        int le = pa.second;
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
            q.push({p->left, le + 1});
            v.push_back({p->left, le + 1});
        }
        if (p->right)
        {
            q.push({p->right, le + 1});
            v.push_back({p->right, le + 1});
        }
    }
    return root;
}

int main()
{
    Node *root = input();
    int x;
    cin >> x;
    bool fla=true;
    for(pair<Node*,int> p : v)
    {
        int l=p.second;
        if(l==x)
        {
            cout << p.first->val << " ";
            fla=false;
        }
    }
    if(fla)
    {
        cout << "Invalid" << endl;
    }
    cout << endl;
    return 0;
}