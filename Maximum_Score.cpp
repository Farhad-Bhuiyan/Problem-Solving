#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        if (n == 1)
        {
            cout << c[0] << endl;
        }
        else
        {
            int sum =0,idx=-1,val=INT_MAX;
            for(int i=0;i<n;i++)
            {
                if((v[i]-c[i])<val)
                {
                    idx=i;
                    val=v[i]-c[i];
                }
            }
            for(int i=0;i<n;i++)
            {
                if(i==idx)
                {
                    sum+=c[i];
                }
                else
                {
                    sum+=v[i];
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}