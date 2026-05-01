#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int>v(n);
        long long r=0,p=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>=x)
            {
                p+=v[i]-x;
                r++;
            }
            else
            {
                if(abs(x-v[i])<=p)
                {
                    p-=abs(x-v[i]);
                    r++;
                }
            }
        }
        cout << r << endl;
    }
    return 0;
}