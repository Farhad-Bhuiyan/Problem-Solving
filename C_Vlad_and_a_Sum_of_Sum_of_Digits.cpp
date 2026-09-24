#include <bits/stdc++.h>
using namespace std;
long long l = 200000;
vector<long long> a(l + 1);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    a[1] = 1;
    for (int i = 2; i <= l; i++)
    {
        long long k = i,sum=0;
        while (k != 0)
        {
            sum += k % 10;
            k /= 10;
        }
        a[i]=a[i-1]+sum;
    }
    while (t--)
    {
        long long n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}