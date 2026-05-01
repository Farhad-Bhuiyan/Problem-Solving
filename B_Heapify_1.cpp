#include<bits/stdc++.h>
using namespace std;
int N=2e5+7;
vector<int>v(N+1,-1);
void p()
{
    int gr=1;
    for(int i=1;i<=N;i++)
    {
        if(v[i]==-1)
        {
            for(int j=i;j<=N;j*=2)
            {
                v[j]=gr;
            }
            gr++;
        }
    }
}
int main()
{
    p();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v2(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> v2[i];
        }
        bool fl=true;
        for(int i=1;i<=n;i++)
        {
            if(v[i]!=v[v2[i]])
            {
                fl=false;
                break;
            }
        }
        if(fl)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}