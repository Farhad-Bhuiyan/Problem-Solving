#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int sz=x.size();
        for(int i=0;i<sz;i++)
        {
            char c;
            if(x[i]>='a' && x[i]<='z')
            {
                c=x[i];
            }
            int k=0;
            if(x[i]>='0' && x[i]<='9')
            {
                k=x[i]-'0';
            }
            while(k--)
            {
                cout << c ;
            }
        }
        cout << endl;
    }
    return 0;
}