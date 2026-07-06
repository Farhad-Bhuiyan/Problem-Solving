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
        int n;
        cin >> n;
        vector<int>a(n);
        for(int &i:a)cin >> i;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int l=0,r=0;
            for(int k=i-1;k>=0;k--)
            {
                if(a[i]>a[k])l++;
            }
            for(int p=i+1;p<n;p++)
            {
                if(a[i]<a[p])r++;
            }
            if(l==r)ans++;
        }
        cout << ans << endl;
    }
}