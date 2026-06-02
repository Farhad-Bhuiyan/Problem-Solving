#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int>qe;
    while(n--)
    {
        int x;
        cin >> x;
        qe.push(x);
    }
    qe.pop();
    qe.pop();
    qe.push(17);
    qe.push(29);
    while(!qe.empty())
    {
        cout << qe.top() << " " ;
        qe.pop();
    }

}