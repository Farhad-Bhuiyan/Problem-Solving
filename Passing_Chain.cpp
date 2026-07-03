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
        int p=1;
        for(int i=1;i<=n;i+=k)
        {
            p=i;
        }
        cout << p << endl;
    }
    return 0;
}