#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    vector<char>ch={'a','b','c','d','e','f','g','h'};
    vector<int>in={8,7,6,5,4,3,2,1};
    int al=-1,nu=-1;
    for(int i=0;i<8;i++)
    {
       if(a[i]=='*')
       {
          al=i;
          nu=0;
       }
       else if(b[i]=='*')
       {
          al=i;
          nu=1;
       }
       else if(c[i]=='*')
       {
          al=i;
          nu=2;
       }
       else if(d[i]=='*')
       {
          al=i;
          nu=3;
       }
       else if(e[i]=='*')
       {
          al=i;
          nu=4;
       }
       else if(f[i]=='*')
       {
          al=i;
          nu=5;
       }
       else if(g[i]=='*')
       {
          al=i;
          nu=6;
       }
       else if(h[i]=='*')
       {
          al=i;
          nu=7;
       }
    }
    cout << ch[al] << in[nu] << endl;
    return 0;
}