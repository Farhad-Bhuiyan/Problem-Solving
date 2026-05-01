#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a[3], b[3];
        for(int i = 0; i < 3; i++) cin >> a[i];
        for(int i = 0; i < 3; i++) cin >> b[i];
        sort(a, a+3, greater<int>());
        sort(b, b+3, greater<int>());
        int sum1=(a[0]*100)+(a[1]*10)+a[2];
        int sum2=(b[0]*100)+(b[1]*10)+b[2];
        if(sum1 < sum2)
        {
            cout << "Bob" << endl;
        }
        else if(sum1 > sum2)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}