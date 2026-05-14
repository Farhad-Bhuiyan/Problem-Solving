#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a<b) && (c<d) && (a<c) && (b<d))cout << "YES" << endl;
        else if((c<a) && (d<b) && (c<d) && (a<b))cout << "YES" << endl;
        else if((d<c) && (b<a) && (d<b) && (c<a))cout << "YES" << endl;
        else if((b<d) && (a<c) && (b<a) && (d<c))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}