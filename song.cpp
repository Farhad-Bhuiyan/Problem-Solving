#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int count=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(v[i])==s.end())
        {
            count++;
            s.insert(v[i]);
        }
        else
        {
            s.clear();
            s.insert(v[i]);
            if(count > max)
            {
                max=count;
            }
            count=0;
            count++;
        }
    }
    cout << max << endl;
    return 0;
}