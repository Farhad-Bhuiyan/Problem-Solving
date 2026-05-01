#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        vector<int>a,b;
        a.push_back(a1);
        a.push_back(a2);
        a.push_back(a3);
        b.push_back(b1);
        b.push_back(b2);
        b.push_back(b3);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int s1=0,s2=0;
        for(int i=0;i<3;i++)
        {
            if(i==0)
            {
                s1=a[i];
                s2=b[i];
            }
            else if(i==1)
            {
                s1+=a[i]*10;
                s2+=b[i]*10;
            }
            else
            {
                s1+=a[i]*100;
                s2+=b[i]*100;
            }
        }
        if(s1>s2)
        {
            cout << "Alice" << endl;
        }
        else if(s1<s2)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
}