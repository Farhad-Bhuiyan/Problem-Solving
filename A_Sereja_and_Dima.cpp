#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    
    int s=0,d=0;
    bool fl=true;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(fl)
        {
            if(v[l]<v[r])
            {
                s+=v[r];
                r--;
            }
            else
            {
                s+=v[l];
                l++;
            }
            fl=false;
        }
        else
        {
            if(v[l]<v[r])
            {
                d+=v[r];
                r--;
            }
            else
            {
                d+=v[l];
                l++;
            }
            fl=true;
        }
    }
    cout << s << " " << d << endl;
}