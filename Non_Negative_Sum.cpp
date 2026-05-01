#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int &i:v)
        {
            cin >> i ;
        }
        sort(v.begin(),v.end(),greater<int>());
        long long sum=0,l=0;
        for(int i:v)
        {
            sum+=i;
            if(sum>=0)
            {
                l++;
            }
        }
        cout <<  l << endl;
    }
    return 0;
}