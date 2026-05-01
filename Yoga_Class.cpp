#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,y;
	    cin >> n >> x >> y;
        if(n>=2)
	    {
	        int  t1=(n/2 *y)+(n-(n/2)*2)*x;
	        int t2=n*x;
	        if(t1>=t2)
	        {
	            cout << t1 << endl;
	        }
	        else
	        {
	            cout << t2 << endl;
	        }
        }
	    else
	    {
            cout << (n*x) << endl;
	    }
	}
    return 0;
}
