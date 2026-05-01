#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c=0;
    while(n--)
    {
       int x;
       cin >> x;
       int y=sqrt(x);
       if(y*y==x)
       {
         c++;
       }
    }
    cout << c << endl;
    return 0;
}