#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int cnt=0;
        bool fl=true;
        for(char a:x)
        {
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
            {
                cnt=0;
            }
            else
            {
                cnt++;
            }
            if(cnt==4)
            {
                cout << "Yes" << endl;
                fl=false;
                break;
            }
        }
        if(!fl)continue;
        cout << "No" << endl;
    }
    return 0;
}
