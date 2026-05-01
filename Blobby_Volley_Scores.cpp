#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int al=0,bo=0,a=1,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A' && a==1)
            {
                al++;
            }
            else if(s[i]=='B' && b==1)
            {
                bo++;
            }
            else if(s[i]=='B' && a==1)
            {
                a=0;
                b=1;
            }
            else if(s[i]=='A' && b==1)
            {
                a=1;
                b=0;
            }
        }
        cout << al << " " << bo << endl;
    }
}