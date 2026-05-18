#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int co=0;
        while(x+y<=z){
            x+=1;
            co++;
            if(x+y>z)break;
            y+=1;
            co++;
        }
        while(z+y<=x){
            z+=1;
            co++;
            if(z+y>x)break;
            y+=1;
            co++;
        }
        while(x+z<=y){
            x+=1;
            co++;
            if(z+x>y)break;
            z+=1;
            co++;
        }
        cout << co << endl;
    }
    return 0;
}