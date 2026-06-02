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
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;
        int ans=1,c=0;
        vector<int>l(n),an;
        l[0]=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])l[i]=l[i-1]+1;
            else l[i]=1;
            ans=max(ans,l[i]);
        }
        an.push_back(ans);
        int ans2=l[n-1];
        while(q--)
        {
            char x;
            cin >> x;
            if(x==s[s.size()-1])
            {
                ans2++;
                ans=max(ans,ans2);
                an.push_back(ans);
            }
            else
            {
                ans2=1;
                an.push_back(ans);
            }
            s.push_back(x);
        }
        for(int i:an)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}