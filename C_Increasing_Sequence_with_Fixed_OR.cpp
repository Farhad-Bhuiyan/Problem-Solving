#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        deque<long long>ans;
        for(int i=0;i<=__lg(n);i++)
        {
            if((n>>i)&1)
            {
                if((n-(1LL<<i))>0)
                {
                    ans.push_front(n-(1LL<<i));
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() << endl;
        for(long long i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}