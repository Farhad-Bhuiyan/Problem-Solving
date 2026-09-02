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
        cin >> n ;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i%2==0)
            {
                b[i]=a[i];
            }
            else
            {
                b[i]=-a[i];
            }       
        }
        long long ans=abs(b[0]);
        for(int i=1;i<n;i++)
        {
            ans+=abs(b[i]-b[i-1]);
        }
        ans+=abs(b[n-1]);
        
        cout << ans/2 << endl;
    }
    return 0;
}