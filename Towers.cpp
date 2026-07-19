#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long>a;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin >> x;
        auto it=upper_bound(a.begin(),a.end(),x);
        if(it==a.end())
        {
            a.push_back(x);
        }
        else
        {
            *it=x;
        }
    }
    cout << a.size() << endl;
    return 0;
}