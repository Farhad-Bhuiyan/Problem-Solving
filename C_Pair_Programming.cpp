#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,n,m;
        cin >> k >> n >> m;
        vector<int>a(n),b(m),ans;
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i=0;i<m;i++)cin >> b[i];
        int i=0,j=0;
        bool fl=true;
        while(i<n || j<m)
        {
            if(i<n && j<m)
            {
                if(a[i]==0)ans.push_back(0),i++,k++;
                else if(b[j]==0)ans.push_back(0),j++,k++;
                else
                {
                    if(a[i]<b[j] && a[i]<=k)ans.push_back(a[i]),i++;
                    else if(a[i]>=b[j] && b[j]<=k)ans.push_back(b[j]),j++;
                    else
                    {
                        cout << -1 << endl;
                        fl=false;
                        break;
                    }
                }
            }
            else if(i<n)
            {
                if(a[i]==0)ans.push_back(0),i++,k++;
                else if(a[i]<=k)ans.push_back(a[i]),i++;
                else
                {
                    cout << -1 << endl;
                    fl=false;
                    break;
                }
            }
            else if(j<m)
            {
                if(b[j]==0)ans.push_back(0),j++,k++;
                else if(b[j]<=k)ans.push_back(b[j]),j++;
                else
                {
                    cout << -1 << endl;
                    fl=false;
                    break;
                }
            }
        }
        if(!fl)
        {
            continue;
        }
        for(int i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}