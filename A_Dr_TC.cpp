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
        string x;
        cin >> x;
        int count=0,mc=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='1')
            {
                count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            string y=x;
            if(x[i]=='0')
            {
                mc+=count+1;
            }
            else
            {
                mc+=count-1;
            }
        }
        cout << mc << endl;
    }
    return 0;
}