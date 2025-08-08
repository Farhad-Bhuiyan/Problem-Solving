#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> v(n);
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        s.insert(v[i]);
    }
    for (auto &l : s)
    {
        cout << l << endl;
    }
    return 0;
}
