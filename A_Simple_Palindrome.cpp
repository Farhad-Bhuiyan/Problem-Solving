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
        vector<char>v={'a','e','i','o','u'};
        string x;
        for(int i=0;i<n;i++)
        {
            x+=v[i%5];
        }
        sort(x.begin(),x.end());
        cout << x << endl;
    }
    return 0;
}