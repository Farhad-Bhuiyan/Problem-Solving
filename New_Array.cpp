#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a,vector<int>b)
{
    vector<int>c=b;
    for(int x:a)
    {
        c.push_back(x);
    }
    for(int y:c)
    {
        cout << y << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    print(a,b);
    return 0;
}