#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        double r= (double)x/(y+1);
        cout << x-(y*(int)r) << endl;
    }
    return 0;
}