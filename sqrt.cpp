#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cout << "Please enter any number: ";
    cin >> n;
    cout << n << endl;
    if (n < 0)
    {
        cout << "Accept positive number only!" << endl;
        return 0;
    }
    double re = sqrt(n);
    cout << "Square root of " << fixed << setprecision(6) << n << " is " << fixed << setprecision(6) << re << endl;

    return 0;
}
