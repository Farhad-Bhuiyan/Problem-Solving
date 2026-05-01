#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int w,p,k;
        cin >> w >> p >> k;
        int r=0;
        while(w!=0 && k!=0)
        {
            r+=2;
            w--;
            k--;
        }
        while(p!=0 && k!=0)
        {
            r+=1;
            p--;
            k--;
        }
        cout << r << endl;
    }
    return 0;
}