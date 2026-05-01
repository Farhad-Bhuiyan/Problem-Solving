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
        int c=0;
        while(n>0)
        {
            if(n%2!=0)
            {
                c++;
            }
            n=n/2;
        }
        if(c%2==0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }
    return 0;
}