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
        string x;
        cin >> x;
        int em=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='.')
            {
                em++;
            }
        }
        for(int i=1;i<n-1;i++)
        {
            if(x[i]=='.' && x[i-1]=='.' && x[i+1]=='.')
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << em << endl;
        }
    }
    return 0;
}