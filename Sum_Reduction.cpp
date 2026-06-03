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
        vector<int>cnt(30);
        while(n--)
        {
            int x;
            cin >> x;
            for(int i=0;i<30;i++)
            {
                if(x & (1<<i))cnt[i]++;
            }
        }
        bool bl=true;
        for(int i:cnt)
        {
            if(i>1)
            {
                bl=false;
                break;
            }
        }
        if(bl)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}