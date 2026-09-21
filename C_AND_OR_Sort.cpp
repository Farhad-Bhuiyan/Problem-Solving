#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int  ans = 0, one = 0;
        bool f = false, l = false;

        if (a[0] == '1')
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == '0')
                {
                    ans++;
                }
            }
        }
        else
        {
            int toz=0;
            for(char i:a)
            {
                if(i=='0')toz++;
            }
            int lon=0;
            int lz=0;
            ans=n;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='0')lz++;
                else lon++;

                int rz=toz-lz;
                int op=lon+rz;
                ans=min(ans,op);
            }
        }
        cout << ans << endl;
    }
    return 0;
}