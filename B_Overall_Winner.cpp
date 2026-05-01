#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int Tidx=0,Aidx=0;
    int T=0,A=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]=='T')
        {
            T++;
            Tidx=i;
        }
        else if(x[i]=='A')
        {
            A++;
            Aidx=i;
        }
    }
    if(T>A)
    {
        cout << "T" << endl;
    }
    else if(T<A)
    {
        cout << "A" << endl;
    }
    else
    {
        if(Tidx<Aidx)
        {
            cout << "T" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    return 0;
}