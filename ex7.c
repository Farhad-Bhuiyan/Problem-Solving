#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("A is larger\n");
        }
        else if(b>a)
        {
            printf("B is larger\n");
        }
        else
        {
            printf("Both are equal\n");
        }
    }
    return 0;
}
