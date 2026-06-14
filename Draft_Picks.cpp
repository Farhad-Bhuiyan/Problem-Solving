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
        int n,m;
        cin >> n >> m;
        vector<int>a(n+1);
        bool fl=true;
        while(m>0)
        {
            if(fl)
            {
                for(int i=1;i<=n && m>0;i++)
                {
                    a[i]+=m;
                    m--;
                }
            }
            else
            {
                for(int i=n;i>=1 && m>0;i--)
                {
                    a[i]+=m;
                    m--;
                }
            }
            fl=!fl;
        }
        cout << *max_element(a.begin(),a.end()) << endl;
    }
    return 0;
}