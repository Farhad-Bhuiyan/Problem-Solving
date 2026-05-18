#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        if(s==t || s[0]=='1')
        {
            cout << "YES" << endl;
            continue;
        }
        int p=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                p=i;
                break;
            }
        }
        if(p!=-1)
        {
            bool fl=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=t[i])
                {
                    if(p>i)
                    {
                        fl=false;
                        break;
                    }
                }
            }
            if(fl)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}