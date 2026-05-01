//Write a C Program to Calculate Area of a Square, take length of one side as user input.
#include<stdio.h>
int main()
{
    int length,Area;

    printf("Enter the length of the square : ");
    scanf("%d",&length);

    Area=length*length;
    printf("The Area of the square is %d ",Area);

    return 0;
}
