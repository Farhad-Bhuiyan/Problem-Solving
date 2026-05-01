#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n+1);
        set<int>s;
        for(int i=1;i<=n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        int mn=*s.begin(),mx=*--s.end();
        int l=1,r=n;
        while(l<r)
        {
            if(v[l]!=mn && v[l]!=mx && v[r]!=mx && v[r]!=mn)
            {
                break;
            }
            if(v[l]==mn)
            {
               s.erase(v[l]);
               l++;
               mn=*s.begin();
            }
            else if(v[l]==mx)
            {
               s.erase(v[l]);
               l++;
               mx=*--s.end();
            }
            else if(v[r]==mn)
            {
                s.erase(v[r]);
                r--;
                mn=*s.begin();
            }
            else if(v[r]==mx)
            {
                s.erase(v[r]);
                r--;
                mx=*--s.end();
            }
        }
        if(l==r)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l << " " << r << endl;
        }
    }
    return 0;
}