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
        cin >>n;
        string x;
        cin >> x;
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            if(x[i]=='m' && x[i+1]=='a' && x[i+2]=='p')
            {
                ans++;
                i+=2;
            }
            else if(x[i]=='p' && x[i+1]=='i' && x[i+2]=='e')
            {
                ans++;
                i+=2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}