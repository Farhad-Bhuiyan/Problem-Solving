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
        int f=-1 ,f2=-1;
        bool f1=true;
        for(int i=0;i<n;i++)
        {
            if(f1 && x[i]=='B')
            {
                f=i;
                f2=i;
                f1=false;
            }
            if(x[i]=='B')
            {
                f2=i;
            }
        }
        if(f==f2)
        {
            cout << 1 << endl;
        }
        else
        {
            if(f==0){
                cout << f2+1 << endl;
            }
            else
            {
                cout << abs(f-f2)+1 << endl;
            }
        }
    }
    return 0;
}