#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,string> m;
    string a,x,y,z;
    while(getline(cin,a) && !a.empty())
    {
        int p=a.find(' ');
        x=a.substr(0,p);
        y=a.substr(p+1);
        m[y]=x;
    }
    while(cin >> z)
    {
        if(m.find(z)!=m.end())
        {
            cout << m[z] << endl;
        }
        else
        {
            cout << "eh" << endl;
        }
    }
    return 0;
}