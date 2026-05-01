#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
     string na;
     int cl;
     char sec;
     int id;
     int mm;
     int em;
};
bool cmp(student a,student b)
{
    if((a.mm+a.em)==((b.mm+b.em)))
    {
        return a.id<b.id;
    }
    else
    {
        return (a.mm+a.em)>(b.mm+b.em);
    }
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].na >> a[i].cl >> a[i].sec >> a[i].id >> a[i].mm >> a[i].em;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout << a[i].na << " " <<  a[i].cl << " " << a[i].sec << " " <<  a[i].id << " " << a[i].mm << " " << a[i].em << endl;
    }
    return 0;
}