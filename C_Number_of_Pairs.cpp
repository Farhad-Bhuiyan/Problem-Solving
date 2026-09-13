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
        int n,l,r;
        cin >> n >> l >> r;
        vector<int>a(n);
        for(int &i:a)cin >> i;
        sort(a.begin(),a.end());
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
           long long x=a[i];
           long long mn=l-x;
           long long mx=r-x;

           int lf=lower_bound(a.begin()+i+1,a.end(),mn)-a.begin();
           int rt=upper_bound(a.begin()+i+1,a.end(),mx)-a.begin()-1;
           cnt+=(rt-lf+1);
        }
        cout << cnt << endl;
    }
    return 0;
}