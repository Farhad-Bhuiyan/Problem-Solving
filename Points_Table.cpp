#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,a,b;
    cin >> x >> y >> a >> b ;
    if(x>a)
    {
        cout << "Alice" << endl;
    }
    else if(x<a)
    {
        cout << "Bob" << endl;
    }
    else
    {
        if(y>b)
        {
            cout << "Alice" << endl;
        }
        else if(y<b)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}