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
        int n;
        cin >> n;
        string x;
        cin >> x;
        int c=0;
        for(char i:x)
        {
            if (i=='?')c++;
        }
        if(c==n)cout << "NO" << endl;
        else if(c==0) cout << "YES" << endl;
        else
        {
            bool fl=true;
            for(int i=0,j=n-1;i<n/2;i++,j--)
            {
                if(x[i]=='?' && x[j]=='?')
                {
                    fl=false;
                    break;
                }
                if(x[i]!=x[j] && x[i]!='?' && x[j]!='?')
                {
                    fl=false;
                    break;
                }
            }
            if(fl && n%2==1)
            {
                if(x[n/2]=='?')fl=false;
            }
            if(fl)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}