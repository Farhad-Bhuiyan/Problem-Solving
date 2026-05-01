#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>my;
    while(1)
    {
        string x;
        cin >> x;
        if(x!="end")
        {
            my.push_back(x);
        }
        else
        {
            break;
        }
    }
    auto itm=my.begin();
    int q;
    cin >> q;
    for(int i=1;i<=q;i++)
    {
        string a,b;
        cin >> a;
        if(a=="visit")
        {
            cin >> b;
            auto it=find(my.begin(),my.end(),b);
            if(it!=my.end())
            {
                cout << b << endl;
                itm=it;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(a=="next")
        {
            auto dem=itm;
            if(++dem!=my.end())
            {
                cout << (*dem) << endl;
                itm=dem;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(a=="prev")
        {
            auto dem=itm;
            if(--dem!=my.end())
            {
                cout << (*dem) << endl;
                itm=dem;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}