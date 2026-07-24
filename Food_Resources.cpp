#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a;

bool check(int day)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=a[i]/day;
    }
    if(c>=m)return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    a.resize(n);
    for(int &i:a)cin >> i;
    int l=1,r=*max_element(a.begin(),a.end());
    int dur=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            dur=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout << dur << endl;
    return 0;
}