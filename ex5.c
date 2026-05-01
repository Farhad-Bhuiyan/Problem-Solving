#include <stdio.h>
#include <math.h>
long long int print(long long int n,long long int i)
{
   if(pow(2,i)>n)
   {
      return i-1;
   }
   print(n,i+1);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int r = print(n,0);
    printf("%lld\n",r);
    return 0;
}
