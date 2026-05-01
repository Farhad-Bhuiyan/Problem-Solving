#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        if((n*5)>=s)
        {
            cout << n*6 << endl;
        }
        else
        {
            int c6=s%(n*5);
            int c5=n-c6;
            cout << c6*5 + c5*6 << endl;
        }
    }
    return 0;
}