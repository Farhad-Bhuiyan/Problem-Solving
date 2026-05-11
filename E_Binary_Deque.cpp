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
        int n,s;
        cin >> n >> s;
        vector<int>a(n);
        for(int &i:a) cin >> i;
        int l=0,r=0;
        int sum=0,len=0;
        while(r<n)
        {
            sum+=a[r];

            while(l<=r && sum>s)
            {
                sum-=a[l];
                l++;
            }
            if(sum==s)
            {
                len=max(len,r-l+1);
            }
            r++;
        }
        if(len==0)cout << -1 << endl;
        else cout << n-len << endl;
    }
}