//Write a C program to enter temperature in Fahrenheit(°F) and convert it into Celsius(°C).
#include<stdio.h>
int main()
{
    int Fahrenheit,Celsius;

    printf("Enter the temperature in Fahrenheit :");
    scanf("%d",&Fahrenheit);

    Celsius=(Fahrenheit-32)*5/9;
    printf("The temperature in Celsius is %d",Celsius);

    return 0;
}
