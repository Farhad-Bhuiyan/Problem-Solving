#include <bits/stdc++.h>
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
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j+1]==0)
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
        for(int i:a)cout << i << " " ;
        cout << endl;
    }
    return 0;
}