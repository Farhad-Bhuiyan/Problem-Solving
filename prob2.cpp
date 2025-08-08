#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int>m;
    while(n--)
    {
        string x;
        cin >> x;
        m[x]+=1;
        if(m[x]>1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

