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
    int c=0,k=1;
    sort(v.begin(),v.end());
    for(int i=0;i<n && k<=n;i++)
    {
        if(v[i]>=k)
        {
            c++;
            k++;
        }
    }
    cout << c << endl;
    return 0;
}