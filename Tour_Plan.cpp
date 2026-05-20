#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin >> x >> y >> z;
	if(z>50)
	{
	    cout<< x+abs(50-z)*y << endl;
	}
	else
	{
	    cout << x << endl;
	}

}
