#include <stdio.h>

int main() {
char name[10];
double salary,soldbyhim,TOTAL;
scanf("%s",&name);
scanf("%lf",&salary);
scanf("%lf",&soldbyhim);


TOTAL=salary+(soldbyhim*0.15);
printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
