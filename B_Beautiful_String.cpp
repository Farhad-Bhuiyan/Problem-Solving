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
        cout << count(x.begin(),x.end(),'1') << endl;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='1')
            {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}