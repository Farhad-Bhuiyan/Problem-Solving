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
        if(n<=9)
        {
            cout << 0 << endl;
            continue;
        }
        long long sum=0;
        while(n!=0)
        {
            int k=n%10;
            sum+=k;
            n=n/10;
        }

    }
    return 0;
}