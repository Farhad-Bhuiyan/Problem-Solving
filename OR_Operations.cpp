#include <bits/stdc++.h>
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
        vector<int>a(n);
        int r=0;
        for(int &i:a)
        {
            cin >> i;
            r|=i;
        }
        int l=0,co=0;
        for(int i:a)
        {
            l|=i;
            if(l==r)
            {
                co++;
                l=0;
            }
        }
        cout << n-co << endl;
    }
    return 0;
}