#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long y;
        cin >> y;
        set<long long> x;
        vector<long long> j;
        long long c=0;
        j.push_back(c);
        x.insert(c);
        for(int i=1;i<=1000;i++)
        {
            c=j[i-1]+i;
            if(c>y)break;
            j.push_back(c);
            x.insert(c);
        }
        auto it=x.find(y);
        if(it!=x.end())
        {
            long long idx= distance(x.begin(),it);
            cout << idx << endl;
        }
        else
            cout <<  "NAI" << endl;

    }
    return 0;
}
