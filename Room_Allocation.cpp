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
        int a[n];
        int con=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i] ;
            con+=ceil(a[i]/2.0);
        }
        cout << con << endl;
    }
    return 0;
}