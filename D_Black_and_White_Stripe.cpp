#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string x;
        cin >> x;
        int l=0,r=0;
        int c=INT_MAX;
        map<char,int>mp;
        while(r<n)
        {
            if(x[r]=='W')
            {
                mp[x[r]]++;
            }
            if(r-l+1 == k)
            {
                c=min(mp['W'],c);
                mp[x[l]]--;
                l++;
            }
            r++;
        }
        cout << c << endl;
    }
    return 0;
}