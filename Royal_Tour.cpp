#include <bits/stdc++.h>
using namespace std;
long long dist(long long r1,long long c1,long long r2,long long c2)
{
    return max(abs(r1-r2),abs(c1-c2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        long long i,j;
        cin >> i >> j;

        vector<pair<long long,long long>>co={{1,1},{1,m},{n,1},{n,m}};
        vector<long long>p={0,1,2,3};
        long long ans=LLONG_MAX;
        do{
            long long move=0;
            move+=dist(i,j,co[p[0]].first,co[p[0]].second);
            for(int i=1;i<4;i++)
            {
                move+=dist(co[p[i-1]].first,co[p[i-1]].second,co[p[i]].first,co[p[i]].second);
            }
            ans=min(move,ans);

        }while(next_permutation(p.begin(),p.end()));
        cout << ans << endl;
    }

    return 0;
}