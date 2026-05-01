#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    long long ad=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int l=0,r=0,c=0;
    long long sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum==k)
        {
            c++;
            sum-=v[l];
            l++;
        }
        if(sum>k)
        {
            sum-=v[l];
            l++;
            sum-=v[r];
        }
        else
        {
            r++;
        }
    }
    while(l<n)
    {
        if(sum==k)
        {
            c++;
        }
        sum-=v[l];
        l++;
    }
    cout << c << endl;
    return 0;
}