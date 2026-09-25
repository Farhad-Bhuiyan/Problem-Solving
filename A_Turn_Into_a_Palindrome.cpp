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
        long long n;
        char c;
        string a;
        cin >> n >> c;
        cin >> a;
        long long ans=0;
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            if(a[i]!=a[j])
            {
                if(a[i]!=c)ans++;
                if(a[j]!=c)ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}