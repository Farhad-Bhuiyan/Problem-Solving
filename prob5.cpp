#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    map<long long, long long> m;
    for (int i = 0; i < n; i++)
    {
        long long y;
        cin >> y;
        m[y]++;
    }
    cout << m.size() << endl;
    return 0;
}

