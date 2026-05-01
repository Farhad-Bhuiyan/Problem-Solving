#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    multiset<int>s;
    set<int>ss;
    ss.insert(n);
    ss.insert(0);
    s.insert(n);
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        auto ri=ss.upper_bound(x);
        auto li=ri;
        li--;
        int b=*ri;
        int l=*li;
        s.erase(s.find(b-l));
        s.insert(x-l);
        s.insert(b-x);
        ss.insert(x);
        cout << *s.rbegin()<< " ";
    }
    return 0;
}