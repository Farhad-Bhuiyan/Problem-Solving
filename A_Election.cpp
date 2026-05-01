#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<string, string>> v;
    map<string, int> m;
    while (n--)
    {
        string x, y;
        getline(cin, x);
        getline(cin, y);
        v.push_back(make_pair(x, y));
    }
    int p;
    cin >> p;
    cin.ignore();
    while (p--)
    {
        string z;
        getline(cin, z);
        m[z]++;
    }
    int maxval = 0;
    string l;
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->second > maxval)
        {
            maxval = it->second;
            l = it->first;
        }
    }
    map<int, int> m2;
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        m2[it->second]++;
    }
    if (m2[maxval] > 1)
    {
        cout << "tie" << endl;
        return 0;
    }
    else
    {
        for (size_t i = 0; i < v.size(); i++)
        {
            if (v[i].first == l)
            {
                cout << v[i].second << endl;
                return 0;
            }
        }
    }

    return 0;
}