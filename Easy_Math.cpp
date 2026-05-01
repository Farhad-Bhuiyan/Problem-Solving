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
        vector<int> v(n);
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long sum1=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long re = v[i] * v[j];
                long long sum2=0;
                while (re != 0)
                {
                    sum2 += re % 10;
                    re = re / 10;
                }
                if(sum2>sum1)
                {
                    sum1=sum2;
                }
            }
            
        }
        cout << sum1 << endl;
    }
    return 0;
}
