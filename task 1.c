#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the term");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        sum=(sum*10)+i;
        i++;
    }
    printf("The answer is=%d",sum);
    return 0;
}
