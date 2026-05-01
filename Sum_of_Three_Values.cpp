#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int nd=x-v[i].first;
        int l=i+1,r=n-1;
        while(l<r)
        {
            if(v[l].first+v[r].first==nd)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second ;
                return 0;
            }
            else if(v[l].first+v[r].first>nd)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}