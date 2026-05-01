#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='a' || x[i]=='A')
        {
            cout << "@";
        }
        else if(x[i]=='b' || x[i]=='B')
        {
            cout << "8";
        }
        else if(x[i]=='c' || x[i]=='C')
        {
            cout << "()";
        }
        else if(x[i]=='d' || x[i]=='D')
        {
            cout << "|)";
        }
        else if(x[i]=='e' || x[i]=='E')
        {
            cout << "3";
        }
        else if(x[i]=='f' || x[i]=='F')
        {
            cout << "#";
        }
        else if(x[i]=='g' || x[i]=='G')
        {
            cout << "6";
        }
        else if(x[i]=='h' || x[i]=='H')
        {
            cout << "[-]";
        }
        else if(x[i]=='i' || x[i]=='I')
        {
            cout << "|";
        }
        else if(x[i]=='j' || x[i]=='J')
        {
            cout << "_|";
        }
        else if(x[i]=='k' || x[i]=='K')
        {
            cout << "|<";
        }
        else if(x[i]=='l' || x[i]=='L')
        {
            cout << "1";
        }
        else if(x[i]=='m' || x[i]=='M')
        {
            cout << "[]\\/[]";
        }
        else if(x[i]=='n' || x[i]=='N')
        {
            cout << "[]\\[]";
        }
        else if(x[i]=='o' || x[i]=='O')
        {
            cout << "0";
        }
        else if(x[i]=='p' || x[i]=='P')
        {
            cout << "|D";
        }
        else if(x[i]=='q' || x[i]=='Q')
        {
            cout << "(,)";
        }
        else if(x[i]=='r' || x[i]=='R')
        {
            cout << "|Z";
        }
        else if(x[i]=='s' || x[i]=='S')
        {
            cout << "$";
        }
        else if(x[i]=='t' || x[i]=='T')
        {
            cout << "']['";
        }
        else if(x[i]=='u' || x[i]=='U')
        {
            cout << "|_|";
        }
        else if(x[i]=='v' || x[i]=='V')
        {
            cout << "\\/";
        }
        else if(x[i]=='w' || x[i]=='W')
        {
            cout << "\\/\\/";
        }
        else if(x[i]=='x' || x[i]=='X')
        {
            cout << "}{";
        }
        else if(x[i]=='y' || x[i]=='Y')
        {
            cout << "`/";
        }
        else if(x[i]=='z' || x[i]=='Z')
        {
            cout << "2";
        }
        else
        {
            cout << x[i];
        }
    }
    

    return 0;
}
