#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long>a(n);
    long long sum=0,mx=0;
    for(long long &i:a)
    {
        cin >> i,
        sum+=i;
        if(mx<i)mx=i;
    }
    cout << max(sum,mx*2) << endl;
    return 0;
}