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
        int x;
        cin >> x;
        int a=1<<__lg(x);
        int b=x^a;
        cout << min(a,b) << " " << max(a,b) << endl;
    }
    return 0;
}