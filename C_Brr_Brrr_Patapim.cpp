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
        int a[n+1][n+1];
        vector<bool>fl((2*n)+1,false);
        deque<int>val((2*n)+1);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin >> a[i][j];
                if((i+j)<=2*n)val[i+j]=a[i][j],fl[a[i][j]]=true;
            }
        }
        for(int i=1;i<=2*n;i++)
        {
            if(!fl[i])val.push_front(i);
        }
        for(int I:val)
        {
            if(I!=0)
            cout << I << " ";
        }
        cout << endl;
    }
    return 0;
}