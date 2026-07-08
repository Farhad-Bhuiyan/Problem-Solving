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
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(long long &i:a)cin >> i;
        long long s=0,f=a[0];
        for(long long i=1;i<n;i++)
        {
            f=max(f,a[i]);
            s+=f-a[i];
        }
        cout << s << endl;
    }
    return 0;
}