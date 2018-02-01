#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,ans;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    ans=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%0.4lf\n",ans);
    return 0;

}
