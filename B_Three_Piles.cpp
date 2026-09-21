#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        long long d1=abs(a-b);
        long long d2=abs((a+c)-b);
        if(d1<d2)
        {
            cout << d2 << endl;
        }
        else 
        {
            cout << d1 << endl;
        }
    }
    return 0;
}