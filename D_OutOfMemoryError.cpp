#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,m,h;
       cin >> n >> m >> h;
       vector<int>v(n),v2,cc1(m),bb1(m);
       for(int i=0;i<n;i++)
       {
          cin >> v[i];
       }
       int bb=0,cc=0;
       for(int i=0;i<m;i++)
       {
          int b,c;
          cin >> b >> c;
          bb1[i]=b-1;
          cc1[i]=c;
          int t=v[b-1]+c;
          if(t>h)
          {
             bb=i;
             cc=i;
          }
       }
       for(int i=bb+1;i<m;i++)
       {
           v[bb1[i]]+=cc1[i];

       }
       for(int i=0;i<n;i++)
       {
        cout << v[i] << " ";
       }
       cout << "\n";
    }
    return 0;
}