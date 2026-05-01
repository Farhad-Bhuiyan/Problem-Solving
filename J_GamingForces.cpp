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
        int co=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==1)
            {
                co++;
            }
        }
        int tol=ceil(co/2.0)+(n-co);
        cout << tol << endl;
    }
    return 0;
}