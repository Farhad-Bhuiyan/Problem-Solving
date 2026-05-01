#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool pal = true;
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            if (s[i] != s[j])
            {
                pal = false;
            }
        }
        if (pal == true)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int al[26]={0};
            for (int i = 0; i < s.size(); i++)
            {
                al[s[i] - 'a']++;
            }
            int od = 0, even = 0;
            for (int i = 0; i < 26; i++)
            {
                if (al[i] % 2 == 1)
                {
                    od++;
                }
            }
            if (od <= 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << od - 1 << endl;
            }
        }
    }
    return 0;
}