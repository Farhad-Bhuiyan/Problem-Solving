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
        int l=0,r=0,an=0;
        while(r<n)
        {
            if(x[r]=='B')
            {
                an++;
                r+=k;
            }
            else
            {
                r++;
            }
        }
        cout << an << endl;
    }
    return 0;
}