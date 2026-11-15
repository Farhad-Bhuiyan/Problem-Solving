#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        string x;
        cin >> x;
        map<char,long long>mp;
        for(char i:x)
        {
            mp[i]++;
        }
        long long mx=max(mp['0'],mp['1']);
        long long mn=min(mp['0'],mp['1']);
        long long c=min(k,mn);
        mn-=c;
        mx+=c;

        long long ans= 1 + ((mn*(mn+1))/2) + ((mx*(mx+1))/2);
        cout << ans << endl;
    }

    return 0;
}