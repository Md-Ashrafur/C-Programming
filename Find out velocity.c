#include <stdio.h>
#include <math.h>
int main()
{
    float d,t,av,time,dis;
    scanf("%f%f",&d,&t);
    time=t*60*60;
    dis=d*1000.00;
    av=dis/time;
       printf("The average velocity is %f",av);
    return 0;
}
