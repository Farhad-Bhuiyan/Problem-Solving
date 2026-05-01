#include <stdio.h>
#include <string.h>
int main()
{
 
    char s[100001];
    scanf("%s", &s);
    int sz = strlen(s);
    for(int i=0;i<sz;i++)
    {
        if(s[i]==',')
        {
            printf(" ");
        }
        else if(s[i]>= 'A' && s[i]<= 'Z')
        {
            printf("%c",s[i]+32);
        }
        else
        {
            printf("%c",s[i]-32);
        }
    }
    return 0;
}