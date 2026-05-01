#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
     string na;
     int cl;
     char sec;
     int id;


};
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].na >> a[i].cl >> a[i].sec >> a[i].id;
    }
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        student temp;
        temp.sec=a[i].sec;
        a[i].sec=a[j].sec;
        a[j].sec = temp.sec;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i].na << " " <<  a[i].cl << " " <<  a[i].sec << " " <<  a[i].id << endl;
    }
    return 0;
}