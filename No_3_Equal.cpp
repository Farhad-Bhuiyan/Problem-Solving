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
        int cn=0;
        for(int i=0;i<n;)
        {
            if(x[i]==x[i+1] && x[i+1]==x[i+2])cn++,i+=3;
            else i++;
        }
        cout << cn << endl;
    }
    return 0;
}