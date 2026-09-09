#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map<int,int>mp1,mp2;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[0]==a[i])
            {
                mp1[a[0]]++;
                mp2[a[i]]=i;
            }
            if(mp1[a[0]]==k)break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[n-1]==a[i] )
            {
                mp1[a[n-1]]++;
                mp2[a[i]]=i;
            }
            if(mp1[a[n-1]]==k)break;
        }
        if(a[0]==a[n-1] && mp1[a[0]]>=(k*2))
        {
            cout << "YES" << endl;
        }
        else if(mp1[a[0]]>=k && mp1[a[n-1]]>=k && mp2[a[0]]<mp2[a[n-1]])
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}