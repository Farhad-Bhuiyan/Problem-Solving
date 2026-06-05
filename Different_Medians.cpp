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
        deque<int>a;
        for(int i=1;i<=n;i++)
        {
           if(i&1)a.push_front(i);
           else a.push_back(i);
        }
        for(int i:a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}