#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,max,abc;
    scanf("%d%d%d",&a,&b,&c);
    max=(a+b+ abs(a-b))/2;
    abc=(max+c+ abs(max-c))/2;
    printf("%d eh o maior\n",abc);
    return 0;

}

