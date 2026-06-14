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
        int n,k;
        cin >> n >> k;
        string x;
        cin >> x;
        for(int i=0;i<=n-k-1;i++)
        {
            if(x[i]=='1')
            {
                x[i]='0';
                if(x[i+k]=='1')
                {
                    x[i+k]='0';
                }
                else
                {
                    x[i+k]='1';
                }
            }
        }
        bool fl=true;
        for(char a:x )
        {
            if(a=='1'){
                fl=false;
                break;
            }
        }
        if(fl)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}