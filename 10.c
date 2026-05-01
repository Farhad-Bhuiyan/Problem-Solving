#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                long long int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(a[i]>=0)
        {
            sum+=a[i];
        }
        else
        {
            break;
        }

    }
    printf("%lld\n",sum);
    return 0;
}
