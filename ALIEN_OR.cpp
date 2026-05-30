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
        long long n,k;
        cin >> n >> k;
        vector<string>a(n);
        vector<bool>fl(k,false);
        for(string &x:a)
        {
            cin >> x;
            int pos=-1;
            bool ch=true;
            for(int i=0;i<k;i++)
            {
                if(x[i]=='1')
                {
                    if(pos==-1)
                    {
                        pos=i;
                    }
                    else
                    {
                        ch=false;
                        break;
                    }
                }
            }
            if(ch && pos!=-1)
            {
                fl[pos]=true;
            }
        }
        bool ans=true;
        for(bool i:fl)
        {
            if(!i)
            {
                ans=false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO" )<< endl;
    }
    return 0;
}