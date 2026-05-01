#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        long long int max = __INT_MAX__;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                if (max > (a[i] + a[j]+j-i))
                {
                    max = (a[i] + a[j]+j-i);
                }
            }
        }
        printf("%lld\n", max);
    }
    return 0;
}