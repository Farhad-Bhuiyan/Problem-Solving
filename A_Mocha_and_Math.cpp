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
        int ad=a[0];
        for(int i:a)
        {
            ad&=i;
        }
        cout << ad << endl;
    }
    return 0;
}