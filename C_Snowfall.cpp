#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        deque<int>d;
        int i=0,j=n-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x%6==0)
            {
                d.push_back(x);
            }
            else if(x%2==0)
            {
                d.push_front(x);
            }
            else if(x%3==0)
            {
                d.push_back(x);
            }
            else
            {
                d.push_back(x);
            }
        }
        for(int i:d)
        {
            cout << i << " " ;
        }
        cout << endl;
    }
    return 0;
}