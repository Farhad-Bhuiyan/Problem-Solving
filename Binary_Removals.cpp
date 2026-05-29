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
        long long n,x,k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        long long one=0,inv=0;
        for(char a:s)
        {
            if(a=='1')one++;
            else inv+=one;
        }
        if(inv<=x && inv%k==0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}