#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    pair<int, int> si, ei;
    vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'R')
                si = {i, j};
            if (a[i][j] == 'D')
                ei = {i, j};
        }
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int,int>>> p(n, vector<pair<int, int>>(m, {-1, -1}));
    queue<pair<int, int>> q;
    q.push(si);
    vis[si.first][si.second]= true;
    bool fl = false;
    while (!q.empty() && !fl)
    {
        auto it = q.front();
        int r=it.first;
        int c=it.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = r + d[i].first;
            int cj = c + d[i].second;

            if (ci >= 0 && ci < n && cj >= 0 && cj < m && !vis[ci][cj])
            {
                if (a[ci][cj] == '.' || a[ci][cj] == 'D')
                {
                    vis[ci][cj] = true;
                    p[ci][cj] = {r, c};
                    pair<int,int>k={ci,cj};
                    if (k == ei)
                    {
                        fl = true;
                        break;
                    }
                    q.push({ci, cj});
                }
            }
        }
    }
    if (fl)
    {
        pair<int, int> pi = ei;
        while (pi != si)
        {
            int r = pi.first, c = pi.second;
            if (a[r][c] == '.')
            {
                a[r][c] = 'X';
            }
            pi = p[r][c];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}