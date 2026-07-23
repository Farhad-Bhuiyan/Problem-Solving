#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<double>a(n),sum(n),avg(n);
      for(double &i:a)cin >> i;
      sort(a.begin(),a.end());
      sum[0]=a[0];
      for(int i=1;i<n;i++)
      {
         sum[i]=sum[i-1]+a[i];
      }
      double mx=sum[n-1],mxa=mx/n;
      avg[0]=mxa;
      for(int i=1;i<n;i++)
      {
         avg[i]= (mx-sum[i-1])/(n-i);
      }
      int ans=n;
      int j=0;
      for(int i=0;i<n;i++)
      {
         bool fl=false;
         int idx=0;
         for(int j=i;j<n;j++)
         {
            if(avg[i]>a[j])
            {
               ans--;
               idx=j;
               fl=true;
            }
         }
         if(fl)i=idx;
      }
      cout << ans << endl;  
   }
   return 0;
}