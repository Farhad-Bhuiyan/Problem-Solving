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
        long long l,a,b;
        cin >> l >> a >> b;
        vector<bool>aa(l,false),bb(l,false);
        int i=0,j=0;
        while(!aa[i])
        {
            aa[i]=true;
            i = (i+a)%l;
        }
        while(!bb[j])
        {         
            bb[j]=true;
            j = (j+b)%l;;
        }
        long long ans=0;
        for(int i=0;i<l;i++)
        {
            if(aa[i] && bb[i])ans++;
        }
        cout << ans << endl;
    }

    return 0;
}