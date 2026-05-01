#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int>li,ne;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        li.push_back(x);
        if(x%2==0)
        {
            ne.push_back(x);
        }
    }
    for(auto it=li.begin();it!=li.end();++it)
    {
        if((*it)%2!=0)
        {
            ne.push_back(*it);
        }
    }
    for(auto it=ne.begin();it!=ne.end();++it)
    {
        cout << *it << " " ;
    }
    cout << endl;
    return 0;
}