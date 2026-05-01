#include <stdio.h>
#include<math.h>
int main() {
    int n;
    int even=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        even+=a[i];
    }
    double ave=(double)even/n;
    int average = (int)round(ave);
    printf("%d\n",even);
    printf("%d\n",average);
    return 0;
}
