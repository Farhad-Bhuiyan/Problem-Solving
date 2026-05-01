#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a;
        scanf("%d",&a);
        int fact=1;
       for(int i=1;i<=a;i++)
       {
           fact=fact*i;
       }
      printf("%d\n",fact);
    }

    return 0;
}
