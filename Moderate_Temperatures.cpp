#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        int mi=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(mi>v[i])
            {
                mi=v[i];
            }
            if(mx<v[i])
            {
                mx=v[i];
            }
        }
        int c=0;
        for(int i:v)
        {
            if(i!=mi &&  i!=mx)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}