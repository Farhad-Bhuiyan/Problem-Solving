#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long a,d;
        cin >> a >> d;
        while (true)
        {
            string s=to_string(a);
            bool f=false;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]-'0'==d)
                {
                    long long p=1;
                    for(int j=i+1;j<s.size();j++)
                    {
                        p*=10;
                    }
                    a=(a/p+1)*p;
                    f=true;
                    break;
                }
            }
            if(!f)
            {
                cout << a << endl;
                break;
            }
        }
        
    }

    return 0;
}