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
        cin >> n;
        vector<long long>a(n);
        for(long long &i:a) cin >> i;
        long long gc1=__gcd(a[0],a[0]),gc2=__gcd(a[1],a[1]);
        for(int i=0;i<n;i++)
        {
            if(i%2==0)gc1=__gcd(gc1,a[i]);
            else gc2=__gcd(gc2,a[i]);
        }
        bool fl1=true,fl2=true;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && a[i]%gc2==0)
            {
                fl1=false;
            }
            if(a[i]%gc1==0 && i%2!=0)
            {
                fl2=false;
            }
        }
        if(fl1 && fl2)
        {
            cout << max(gc1,gc2) << endl;
        }
        else if(fl1 && !fl2)
        {
            cout << gc2 << endl;
        }
        else if(!fl1 && fl2)
        {
            cout << gc1 << endl;
        }
        else 
        {
            cout << 0 << endl;
        }
    }
}