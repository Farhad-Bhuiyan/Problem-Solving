#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int px,py,qx,qy;
        cin >> px >> py >> qx >> qy;
        int rx=(2*qx)-px;
        int ry=(2*qy)-py;
        cout << rx << " " << ry << endl;
    }
    return 0;
}