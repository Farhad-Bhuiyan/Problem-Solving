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
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])c++;
            else 
            {
                ans=max(ans,c);
            }
        }
    }
    return 0;
}