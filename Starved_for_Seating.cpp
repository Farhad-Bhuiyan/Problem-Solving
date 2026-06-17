#include <bits/stdc++.h>
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
        for(int &i:a)cin >> i;
        int sum=0;
        for(int i:a)
        {
            sum+=i;
        }
        int co=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int l=sum-a[i]-a[j];
                l=l/2;
                if((l+a[i]+a[j])>k)co++;
            }
        }
        cout << co << endl;
    }
    return 0;
}