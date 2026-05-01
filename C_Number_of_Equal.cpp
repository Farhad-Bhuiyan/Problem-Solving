#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> v(n), k(m);
    map<int, int> mp, ml;
    vector<int>d={50,100,200,500,1000};
    mp[50]=0,mp[100]=0,mp[200]=0,mp[500]=0,mp[1000]=0;
    ml[50]=0,ml[100]=0,ml[200]=0,ml[500]=0,ml[1000]=0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      mp[v[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
      cin >> k[i];
      ml[k[i]]++;
    }
    int c = 0;
    for (int i : d)
    {
      if(mp[i]<ml[i])
      {
        cout << -(ml[i]-mp[i]) << " ";
      }
      else if(mp[i]>ml[i])
      {
        cout << "+" << mp[i]-ml[i] << " ";
      }
      else
      {
        cout << "+0" << " ";
      }
    }
    cout << endl;
  }
  return 0;
}