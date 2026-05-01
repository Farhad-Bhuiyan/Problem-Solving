#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        int max=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(max<v[i])
            {
                max=v[i];
            }
        }
        cout << max*n << endl;
    }
    return 0;
}