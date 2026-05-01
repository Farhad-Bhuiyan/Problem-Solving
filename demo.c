#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char a[10000001],c[27]={'\0'};
    int b[27]={0};
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        b[a[i]-'a'+1]++;
        c[a[i]-'a'+1]=a[i];
    }
    for(int i=1;i<27;i++)
    { 
        if(c[i]!='\0')
        {
            printf("%c : %d\n",c[i],b[i]);
        }
    }
    return 0;
}