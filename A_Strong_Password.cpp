#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        if (x.size() == 1)
        {
            if(x[0]=='a')
            {
                x.insert(x.begin(),'b');
            }
            else
            {
                x.insert(x.begin(),'a');
            }
            cout << x << endl;
            continue;
        }
        else
        {
            int idx=0;
            for (int i = 1; i < x.size(); i++)
            {
                if(x[i]==x[i-1])
                {
                    idx=i;
                    break;
                }
            }
            if(x[idx]=='a')
            {
                x.insert(x.begin()+idx,'b');
            }
            else
            {
                x.insert(x.begin()+idx,'a');
            }
            cout << x << endl;
        }
    }
    return 0;
}