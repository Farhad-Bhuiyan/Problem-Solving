//Write a C program to enter marks of five subjects and calculate total and average marks.
#include<stdio.h>
int main()
{
    int English,Bangla,Physics,Math,Biology,Total,Average;

    printf("Enter the number of English: ");
    scanf("%d",&English);
    printf("Enter the number of Bangla: ");
    scanf("%d",&Bangla);
    printf("Enter the number of Physics: ");
    scanf("%d",&Physics);
    printf("Enter the number of Math: ");
    scanf("%d",&Math);
    printf("Enter the number of Biology: ");
    scanf("%d",&Biology);

    Total=English+Bangla+Physics+Math+Biology;
    Average=Total/5;

    printf("Total mark = %d\n",Total);
    printf("Average mark = %d",Average);

    return 0;
}
