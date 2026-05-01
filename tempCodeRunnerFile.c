#include <stdio.h>
#include <math.h>
void print(int a[],int n)
{
   for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for(int j=i;j<n-1;j++)
            {
                int te=a[j];
                a[j]=a[j+1];
                a[j+1]=te;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    print(a,n);
    return 0;
}
