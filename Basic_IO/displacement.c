#include <stdio.h>
#include <math.h>
int main()
{
int s,u,t,a;
    
    printf("enter initial velocity");
    scanf("%d",&u);
    printf("enter time in sec");
    scanf("%d",&t);
    printf("enter acceleration");
    scanf("%d",&a);
    s = u*t+pow(t,2)*a;
    printf("final displacement = %d",s);
    return 0;

}
