#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long m=1;
        v[0]=v[0]+1;
        for(int i=0;i<n;i++)
        {
            m*=v[i];
        }
        cout << m << endl;
    }
}