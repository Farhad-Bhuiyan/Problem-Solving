#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int x = (m1*d)/(m1+m2);
        int r=d-x;
        printf("%d\n",r);
    }
    return 0;
}