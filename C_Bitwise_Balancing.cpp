#include <bits/stdc++.h>
using namespace std;
bool kbiton(long long n, long long k)
{
    return ((n >> k) & 1);
}

long long tonkbit(long long n, long long k)
{
    return ((1LL << k) | n);
}
long long toffkbit(long long n, long long k)
{
    return ((~(1LL << k)) & n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        long long b, c, d;
        cin >> b >> c >> d;
        long long a = b;
        long long dbit = max({__lg(b), __lg(c), __lg(d)});
        for (long long k = 0; k <= dbit; k++)
        {
            if (!kbiton(b, k) && kbiton(d, k))
            {
                a = tonkbit(a, k);
            }
            if (kbiton(c, k) && kbiton(d, k))
            {
                a = toffkbit(a, k);
            }
        }
        if (((a | b) - (a & c)) == d)
            cout << a << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}