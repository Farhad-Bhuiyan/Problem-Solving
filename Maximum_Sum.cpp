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
        vector<int>a(n);
        for(int &i:a)
        {
            cin >> i;
        }
        int l=n-k;
        int sum=0;
        for(int i=0;i<l;i++)
        {
            sum+=a[i];
        }
        int mx=sum;
        for(int i=l;i<n;i++)
        {
            sum+=a[i];
            sum-=a[i-l];
            mx=max(mx,sum);
        }
        cout << mx << endl;
    }
    return 0;
}