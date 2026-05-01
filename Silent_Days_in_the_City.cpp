#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    vector<int>v(n),s(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    s[0]=0;
    for(int i=1;i<n-1;i++)
    {
        if(v[i]<v[i-1] && v[i]<v[i+1])
        {
           s[i]=s[i-1]+1;
        }
        else
        {
            s[i]=s[i-1];
        }
    }
    s[n-1]=s[n-2];
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if(l!=1)
        cout << s[r-1]-s[l-2] << endl;
        else
        cout << s[r-1] << endl;
    }
    return 0;
}