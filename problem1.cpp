#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		int n,k;
		cin >> n >> k;
		int one=k,zero=n-k;
		string x;
		if (k==0)
		{
			for(int i=0; i<n; i++)
				x+='0';
		}
		else if(k==n)
		{
			for(int i=0; i<n; i++)
				x+='1';
		}
		else
		{
			while (one > 0 && zero > 0) {
				x+= "10";
				one--;
				zero--;
			}
			while (one--) x+= '1';
            while (zero--) x+= '0';
		}
		cout << x << endl;
	}

	return 0;
}
