#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        string x;
        cin >> x;
        for(int i=0;i<n;)
        {
            cout << x[i];
            for(int j=i+1;j<n;j++)
            {
                if(x[j]==x[i])
                {
                    i=j+1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
} 