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
      vector<int> a(n);
      int od = 0, ev = 0;
      for (int &i : a)
      {
         cin >> i;
         if (i % 2 == 0)
            ev++;
         else
            od++;
      }
      if (od % 2 != 0 && n != od)
         cout << "Yes" << endl;
      else
         cout << "No" << endl;
   }
   return 0;
}