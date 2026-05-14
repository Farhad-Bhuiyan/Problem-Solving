#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            int a = 0, b = 0, c = 0;

            for(int j = i; j < min(n, i + 7); j++)
            {
                if(s[j] == 'a') a++;
                else if(s[j] == 'b') b++;
                else c++;
                int len = j - i + 1;
                if(len >= 2 && a > b && a > c)
                {
                    ans = min(ans, len);
                }
            }
        }
        if(ans == INT_MAX) cout << -1 << '\n';
        else cout << ans << '\n';
    }
}