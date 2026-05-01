#include<bits/stdc++.h>
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
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> v[i];
        }
        bool fl=true;
        for(int i=1;i<n;i++)
        {
            if(v[i]%2==0 && v[i+1]%2==0)
            {
                fl=false;
                break;
            }
            else if(v[i]%2!=0 && v[i+1]%2!=0)
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