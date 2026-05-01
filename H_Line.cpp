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
        string x;
        cin >> x;
        vector<int> r, l;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2 && x[i]=='L')
            {
                r.push_back(i);
            }
            else if (i >= n / 2 && x[i]=='R')
            {
                l.push_back(i);
            }
            if (x[i] == 'L')
            {
                sum += i;
            }
            else
            {
                sum += n - i - 1;
            }
        }
        sort(r.begin(), r.end() ,greater<int>());
        vector<long long> a;
        for (int i = 0; i < n; i++)
        {
            if (!r.empty() || !l.empty())
            {
                long long vl = -1, vr = -1;
                if (!l.empty())
                {
                    vl = l.back();
                }
                if (!r.empty())
                {
                    vr = n - r.back() - 1;
                }
                if (vr >= vl && vr != -1)
                {
                    sum -= r.back();
                    sum += vr;
                    r.pop_back();
                }
                else if (vl > vr && vl != -1)
                {
                    sum -= n-l.back()-1;
                    sum += vl;
                    l.pop_back();
                }
            }
            a.push_back(sum);
        }
        for (long long el : a)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}