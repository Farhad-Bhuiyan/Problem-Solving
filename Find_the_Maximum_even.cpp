#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long>v(n);
    long long max=-1;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]%2==0 && v[i]>max)
        {
            max=v[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            long long sum=v[i]+v[j];
            if(sum>max && sum%2==0)
            {
                max=sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}