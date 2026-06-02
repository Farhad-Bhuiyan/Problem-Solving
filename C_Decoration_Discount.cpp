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
        cin >> n ;
        vector<int>a(n);
        for(int &i:a) cin >> i;
        int su=0;
        auto min=min_element(a.begin(),a.end());
        a[1]/=2;
        if(n>2 && a[1]>*min)
        {
            cout << a[0]+*min << endl;
            continue;
        }
        cout << a[0]+a[1] << endl;
    }
    return 0;
}