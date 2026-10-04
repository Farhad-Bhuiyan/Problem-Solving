#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        n++;
        vector<long long>a(n+1,1);
        long long c=1;
        for(int i=2;i<=n;i++)
        {
            if(a[i]==1)
            {
                for(int j=i+i;j<=n;j+=i)
                {
                    a[j]=2;
                    c=max(c,a[j]);
                }
            }
        }
        cout << c << endl;
        for(int i=2;i<=n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}