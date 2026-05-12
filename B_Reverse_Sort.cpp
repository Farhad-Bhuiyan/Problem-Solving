#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        vector<int>a;
        int co=0;
        for(char c:x)
        {
            if(c=='0')co++;
        }
        for(int i=0;i<co;i++)
        {
            if(x[i]=='1')a.push_back(i+1);
        }
        for(int i=co;i<n;i++)
        {
            if(x[i]=='0')a.push_back(i+1);
        }
        if(a.empty())cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << a.size() << " ";
            for(int i:a)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}