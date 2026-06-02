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
        vector<int>a(n);
        for(int &i:a)cin >> i;
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                c++;
            }
        }
        if(c==0) cout << "Yes" << endl;
        else if(c==1 && a[n-1]<= a[0])cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}