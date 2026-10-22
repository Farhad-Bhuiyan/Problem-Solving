#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        vector<long long>a(n);
        for(long long &i:a)cin >> i;
        sort(a.begin(),a.end());
        long long sum=0,cn=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            long long r=(sum*(sum-1))/2;
            if(r<=m)cn++;
            else break;
        }
        cout << cn << endl;
    }

    return 0;
}