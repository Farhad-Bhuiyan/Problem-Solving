#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    cin.ignore();
    string n;
    cin >> n;
    int l=n.size()-1;
    long long r=0;
    for(char c:n)
    {
        int dig=c-'0';
       
        int mai =1;
        for(int i=1;i<=l;i++)
        {
            mai*=k;
        }
        r+=mai*dig;
        l--;
    }
    cout << r << endl;
    return 0;
}