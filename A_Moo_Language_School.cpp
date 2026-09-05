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
        cin >> x ;
        int c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='0')c++;
            if((i+1)%k==0)
            {
                if(c==0)ans++;

                c=0;
            }
        }
        cout  <<  ans << endl;
    }
}