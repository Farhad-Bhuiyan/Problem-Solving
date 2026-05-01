#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = ms.upper_bound(x);
        if (it != ms.end())
        {
            ms.erase(it);
            ms.insert(x);
        }
        else
        {
            ms.insert(x);
        }
    }
    cout << ms.size() << endl;
    return 0;
}