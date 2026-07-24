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
        int n,k;
        cin >> n >> k;
        vector<int>a;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        while(k--)
        {
            int id=ceil(a.size()/2.0);
            s.insert(a[id-1]);
            a.erase(find(a.begin(),a.end(),a[id-1]));
        }
        int id=ceil(a.size()/2.0);
        s.insert(a[id-1]);
        a.erase(find(a.begin(),a.end(),a[id-1]));

        for(int i:s)
        {
            cout << i << " " ;
        }
        cout << endl;
    }
    return 0;
}