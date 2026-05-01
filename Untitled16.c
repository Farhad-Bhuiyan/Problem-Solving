#include <stdio.h>

 int main() {
    int i,n,j,b=1,c;
    printf("how Many Times:>\n");
    scanf("%d",&n);
    //  printf("how Many Times:>\n");
    // scanf("%d",&b);
       for(i=1;i<=n;i++)
       {
          for(c=n+1;c>i;c--)
          {
             printf(" ");
          }
            for(j=1;j<=i;j++)
           {
           printf("%d ",b++);
           }

        printf("\n");
       }
    return 0;

}
