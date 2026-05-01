#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n+1];
        for(int i=1;i<=n;i++)
        {
             scanf("%lld",&a[i]);
        }
        long long int sum=__LONG_LONG_MAX__;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(sum>(a[i]+a[j]+j-i))
                {
                    sum=(a[i]+a[j]+j-i);
                }
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}