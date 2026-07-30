#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>t1(n),t2(n),p1(n),p2(n);
    for(int &i:t1)cin>> i;
    for(int &i:p1)cin >> i;
    for(int &i:t2)cin >> i;
    for(int &i:p2)cin>> i;
    map<pair<int,int>,int>mp1,mp2;
    set<pair<int,int>>st1,st2;
    for(int i=0;i<n;i++)
    {
        pair<int,int>p={-t1[i],p1[i]};
        mp1[p]=i+1;
        st1.insert(p);
        pair<int,int>k={-t2[i],p2[i]};
        mp2[k]=i+1;
        st2.insert(k);
    }
    auto itf1=st1.begin();
    auto its1=itf1;
    ++its1;
    auto itf2=st2.begin();
    auto its2=itf2;
    ++its2;
    cout<< "Semi-final 1: " << mp1[*itf1] << " vs " << mp2[*its2] << endl;
    cout<< "Semi-final 2: " << mp1[*its1] << " vs " << mp2[*itf2] << endl;
    return 0;
}