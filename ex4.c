#include<stdio.h>
int main()
{
    char a[6],b[6]="Male",c[6]="Female";
    gets(a);
    int d=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            d=0;
        }
        else if(a[i]==c[i])
        {
            d++;
        }
    }
    if(d>0)
    {
        printf("Eligible for Best Female Programmer!\n");
    }
    else{
        printf("Not eligible.\n");
    }
    return 0;
}
