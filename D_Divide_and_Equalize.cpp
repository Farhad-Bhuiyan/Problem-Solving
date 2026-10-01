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
        for(long long &i:a)cin >> i;
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            for(long long j=2;j*j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    while(a[i]%j==0)
                    {
                        mp[j]++;
                        a[i]/=j;
                    }
                }
            }
            if(a[i]>1)
            {
                mp[a[i]]++;
            }
        }

        bool fl=true;
        for(auto it:mp)
        {
            if(it.second%n!=0)
            {
                fl=false;
                break;
            }
        }
        if(fl)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}