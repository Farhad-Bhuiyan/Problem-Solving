#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
       int c1=0,c2=0;
       for(int i=0;i<5;i++)
       {
          int x;
          cin >> x;
          if(x>=30)c1++;
          if(x>=60)c2++;
       }
       if(c1>=4 && c2>=2)cout << "Pass" << endl;
       else cout << "Fail" << endl;
    }
    return 0;
}