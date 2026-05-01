#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n+1);
        map<int,long long>m;
        long long c=0;
        for(int i=1;i<=n;i++)
        {
            cin >> v[i];
            c+=m[v[i]-i];
            m[v[i]-i]++;
        }
        cout << c << endl;
    }   
    return 0;
}