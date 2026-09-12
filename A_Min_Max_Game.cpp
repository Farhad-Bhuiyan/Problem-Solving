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
        int n;
        cin >> n;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int k;
            cin >> k;
            m[k]++;
        }
        if(m[1]>=m[0])
        {
            cout << "Bessie" << endl;
        }
        else
        {
            cout << "Elsie" << endl;
        }
    }
    return 0;
}