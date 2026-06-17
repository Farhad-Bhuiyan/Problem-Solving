#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;
    if(abs(a-b)<=2)cout << "Interesting" << endl;
    else cout << "Boring" << endl;
    return 0;
}