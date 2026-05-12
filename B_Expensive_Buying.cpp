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
        vector<int>a(n);
        for(int &i:a) cin >> i;
        sort(a.begin(),a.end(),greater<int>());
        int su=0;
        for(int i=0;i<k;i++)
        {
            su+=a[i];
        }
        cout << su << endl;
    }
    return 0;
}