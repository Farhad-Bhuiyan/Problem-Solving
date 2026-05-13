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
        vector<int>a(n);
        int gc=0,lc=0,ec=0;
        for(int &i:a)
        {
            cin >> i;
            if(i>k) gc++;
            else if(i<k) lc++;
            else ec++;
        }
        if(ec>0)cout << "Yes" << endl;
        else if(gc==0 || lc==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}