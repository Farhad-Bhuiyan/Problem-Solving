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
        map<int,int>mp;
        map<int,int>dx;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            dx[x]=i;
        }
        for(auto i:mp)
        {
            if(i.second == 1)
            {
                cout << dx[i.first] << endl;
                break;
            }
        }
    }
}