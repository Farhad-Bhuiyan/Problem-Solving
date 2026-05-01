#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        int mo=0;
        while(n!=0 & m!=0)
        {
            mo+=c;
            n--,m--;
        }
        while(n!=0)
        {
            mo+=a;
            n--;
        }
        while(m!=0)
        {
            mo+=b;
            m--;
        }
        cout << mo << endl;
    }
    return 0;
}