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
        vector<int> v(n);
        for(int &i : v)
        {
            cin >> i;
        }
        string x;
        cin >> x;
        vector<long long> prefix(n);
        prefix[0] = v[0];
        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] + v[i];
        }       
        long long ans = 0;
        int l = 0, r = n - 1;    
        while(l < r)
        {
            while(l < n && x[l] != 'L') l++;
            while(r >= 0 && x[r] != 'R') r--; 
            if(l < r)
            {
                if(l == 0)
                    ans += prefix[r];
                else
                    ans += prefix[r] - prefix[l - 1];
                l++;
                r--;
            }
        }  
        cout << ans << endl;
    }
    return 0;
}