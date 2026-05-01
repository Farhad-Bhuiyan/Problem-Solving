#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    cout << "0 " ;
    for(long long  i=1;i<n;i++)
    {
        bool x=false;
        for(long long j=i-1;j>=0;j--)
        {
            if(v[j]<v[i])
            {
                cout<< j+1 << " " ;
                x=true;
                break;
            }
        }
        if(!x)
        cout << "0 ";
    }
    cout << endl;
    return 0;
}