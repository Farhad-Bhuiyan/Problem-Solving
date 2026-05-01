#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin >> s >> t;
    int sum=0,mu=1,co=0;
    bool f1=false,f2=false;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                if((long long)(i+j+k)<=s && (long long)(i*j*k)<=t)
                {
                    co++;
                }
            }
        }
    }
    cout << co << endl;
    return 0;
}