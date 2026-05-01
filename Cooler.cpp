#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int sum=0;
        for(int i=n;m<i;i--)
        {
            sum+=i;
        }
        cout << sum << endl;
    }
    return 0;
}