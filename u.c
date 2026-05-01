#include<stdio.h>
int main ()
{
    float f,c;

    printf("enter celcius:");
    scanf("%f",&c);

    f = (c*9/5)+32;
    printf("temperature in farenhite is :%f",f);

    return 0;
}
