#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, sum=0,c=0;
        cin >> n ;
        vector<int>v(n);
        for(int &i:v)
        {
            cin >> i;
            sum+=abs(i);
        }
        long long l=0,r=0;
        bool f=true;
        while(r<n)
        {
            if(v[r]<0 && f)
            {
                c++;
                f=false;
            }
            if(v[r]>0)
            {
                f=true;
                l=r;
            }
            r++;
        }
        cout << sum << " " << c << endl;

    }
    return 0;
}