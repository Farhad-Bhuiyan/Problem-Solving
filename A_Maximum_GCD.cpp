#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l=1000001;
    vector<int>val(l);
    long long mx=0,j=1;
    for(int i=2;i<=l;i++)
    {
        if(i%j==0)
        {
            j++;
            mx++;
        }
        val[i]=mx;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << val[n] << endl;
    }
    return 0;
}