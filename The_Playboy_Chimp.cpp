#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int k;
        cin >> k;
        auto l = lower_bound(a.begin(), a.end(), k);
        if(l==a.begin())
        {
            cout << "X " ; 
        }
        else
        {
            cout << *--l << " " ;
        }
        auto h = upper_bound(a.begin(), a.end(), k);
        if(h==a.end())
        {
            cout << "X" << endl;
        }
        else
        {
            cout << *h << endl;
        }
    }
    return 0;
}