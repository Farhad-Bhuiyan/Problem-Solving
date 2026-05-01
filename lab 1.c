#include <stdio.h>
#include <string.h>
int main()
{
    char a[11],b[11];
    gets(a);
    gets(b);
    int as=strlen(a);
    int bs=strlen(b);
    printf("%d %d\n",a,b);
    printf("%s%s\n",a,b);
    printf("%s %s\n",a,b);
    return 0;
}
