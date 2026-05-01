#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int to=n*k;
        cout << to/60 << " " << to%60 << endl;
    }
    return 0;
}