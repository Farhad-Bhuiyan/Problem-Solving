#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long b,h,c;
    cin >> b >> h >> c;
    long long br=b/2;
    long long tl=h+c;
    cout << min(br,tl) << endl;
    return 0;
}