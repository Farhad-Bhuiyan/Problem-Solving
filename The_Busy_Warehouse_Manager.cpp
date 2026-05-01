#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int,int>m;
    while(n--)
    {
        int t;
        cin >> t; 
        if(t==1)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        else 
        {
            if(m.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                int f = 0;
                int v= -1;
                for(auto& p : m)
                {
                    int ke = p.first;
                    int vl = p.second;
                    
                    if(vl > f || 
                       (vl == f && productId > productToShip))
                    {
                        maxQuantity = quantity;
                        productToShip = productId;
                    }
                }
                
                cout << productToShip << "\n";
                inventory.erase(productToShip);
            }
        }
    }
    
    return 0;
}