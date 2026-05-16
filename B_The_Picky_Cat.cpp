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
        int n;
        cin >> n;
        vector<int>a(n);
        for(int &i:a)cin >> i;
        int x=abs(a[0]);
        int c=0;
        for(int i:a)
        {
            if(abs(i)<x)c++;
        }
        if(c<=n/2)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}