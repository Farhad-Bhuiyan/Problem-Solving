#include <bits/stdc++.h>
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
        vector<int>a(k);
        for(int &i:a)cin >> i;
        int y=1;
        for(int i=0;i<k;i++)
        {
            for(int j=a[i];j>=y;j--)
            {
                cout << j << " ";
            }
            y=a[i]+1;
        }
        cout << endl;
    }
    return 0;
}