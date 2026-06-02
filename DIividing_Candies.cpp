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
        int n,x;
        cin >> n >> x;
        int cnt=0,min=INT_MIN;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i:a)
        {
            if(i%x==0 && i/x>min)
            {
                min=i/x;
                cnt=i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}