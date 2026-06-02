#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   vector<int> a(n + 1), sum(n + 1);
   for (int i = 1; i <= n; i++)
      cin >> a[i];
   sum[1] = a[1];
   for (int i = 2; i <= n; i++)
   {
      sum[i] = a[i] + sum[i - 1];
   }
   int t;
   cin >> t;
   while (t--)
   {
      long long r, x;
      cin >> r >> x;
      int cnt = 0;
      long long lb = 1, rb = r;
      while (lb <= rb)
      {
         long long mid = (lb + rb) / 2;
         if (sum[mid] <= x)
         {
            cnt = mid;
            lb = mid + 1;
         }
         else
         {
            rb = mid - 1;
         }
      }
      cout << cnt << endl;
   }
   return 0;
}