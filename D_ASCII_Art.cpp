#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int grid[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin >> grid[i][j];
            if(grid[i][j]==0)
            {
                cout << ".";
            }
            else
            {
                cout << (char)(grid[i][j]+64);
            }
        }
        cout << endl;
    }
    return 0;
}