#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int>v(n);
        int s=0,l=0,sm=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==x)
            {
                s++;
            }
            else if(v[i]>x)
            {
                l++;
            }
            else
            {
                sm++;
            }
        }
        if(s==0 && sm>0 && l>0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        
    }
    return 0;
}