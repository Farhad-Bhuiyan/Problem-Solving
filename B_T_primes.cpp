#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n)
{
    if (n < 2)
        return false;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool issqr(long long x)
{
    long long a = sqrtl(x);
    return a * a == x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        long long root = sqrtl(x);

        if (issqr(x) && isprime(root))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}