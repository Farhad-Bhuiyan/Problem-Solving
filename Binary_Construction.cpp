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
        string x="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                x+='0';
            }
            else
            {
                x+='1';
            }
        }
        cout <<  x << endl;
    }
    return 0;
}