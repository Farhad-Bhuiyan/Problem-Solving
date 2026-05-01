#include<stdio.h>
int main()
{
    int i=0;
    char a[100];
    scanf("%[^\n]",a);
    printf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}
