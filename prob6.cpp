#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {

        int N;
        cin >> N;
        if (N == 0)
            break;
        map<string, int> m;

        for (int i = 0; i < N; i++)
        {
            string x;
            cin >> x;
            m[x] += 1;
        }
        int mx = 0;
        string y;
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (it->second > mx)
            {
                mx = it->second;
                y = it->first;
            }
        }
        cout << y << endl;
    }
    return 0;
}

