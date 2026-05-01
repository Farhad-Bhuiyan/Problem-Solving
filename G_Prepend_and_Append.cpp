#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int l=0,r=n-1;
        while(n!=0)
        {
            if((x[l]=='0' && x[r]=='1')||(x[l]=='1' && x[r]=='0'))
            {
                n-=2;
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}