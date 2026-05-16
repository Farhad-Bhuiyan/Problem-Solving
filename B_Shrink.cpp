#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        deque<int>dq;
        for(int i=n;i>=1;i--)
        {
            if(i&1)dq.push_front(i);
            else dq.push_back(i);
        }
        for(int I:dq)
        {
            cout << I << " ";
        }
        cout << endl;
    }
    return 0;
}