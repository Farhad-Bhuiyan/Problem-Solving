#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int bit=s.size();
        int full=0;
        for(int i=1;i<bit;i++)
        {
            full+=(1<<i);
        }
        int p=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<bit;i++)
        {
            if(s[i]=='7')
            {
                p+=(1<<i);
            }
        }
        int ans=full + p +1;
        cout << ans << endl;
    }

    return 0;
}