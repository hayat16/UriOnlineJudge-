
#include<stdio.h>
#define PI 3.14159
int main()
{

    double vol,r;
    scanf("%lf",&r);
    vol=((4.0/3)*PI*r*r*r);
    printf("VOLUME = %0.3lf\n",vol);
    return 0;

}


