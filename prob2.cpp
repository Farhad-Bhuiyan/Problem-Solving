#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int c=x.size();
    if((x[0]>='A'|| x[0]<='Z')&&(x[c-1]>='A'|| x[c-1]<='Z'))
    {
        if((x[1]>='1'&&x[1]<='9')&&(x[c-2]>='1'||x[c-2]<='9'))
        {
            int flag=1;
            int i; 
            string k;
            for(i=1;i<c-1;i++)
            {
                k+=x[i];
            }
            int r=stoi(k);
            if(r>=100000 && r<=999999)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

