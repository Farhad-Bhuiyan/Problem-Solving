#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>w(n),t(n);
    for(int i=0;i<n;i++) cin >> w[i] >> t[i];
    int maxw=0;
    for(int i=0;i<24;i++)
    {
        int to=0;
        for(int j=0;j<n;j++)
        {
            int st=(i+t[j])%24;
            int et=(i+t[j]+1)%24;
            if(st>=9 && et<=18 && et>st)
            {
                to+=w[j];
            }
        }
        maxw=max(maxw,to);
    }
    cout << maxw << endl;
    return 0;
}