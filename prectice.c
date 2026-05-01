#include<stdio.h>
int main()
{
    int n, count;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    printf("%d Natural numbers are: \n",n);

    count=1;
    while (count<=n)
    {
        printf("%d\n",count);
        count++;
    }
    return 0;

}
