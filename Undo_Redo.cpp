#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cin.ignore();
    string x;
    stack<char>s;
    while(n--)
    {
        string y;
        cin >> y;
        if(y=="TYPE")
        {
            char ch;
            cin >> ch;
            x+=ch;
            while(!s.empty())
            {
                s.pop();
            }
        }
        else if(y=="UNDO")
        {
            if(!x.empty())
            {
                char l=x.back();
                s.push(l);  
                x.pop_back(); 
            }
        }
        else if(y=="REDO")
        {
            if(!s.empty())
            {
                char l=s.top();
                s.pop();
                x += l;  
            }
        }
    }
    cout << x << endl;
    return 0;
}