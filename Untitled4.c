#include <stdio.h>
int main ()
{

    float x, y, t, m, tw, u, tu, cost, tc1, tc2, tc3;
    printf ("Please Input:\n Number of light\n Number of FAN\n Duration of Running Time\n DAYS you want to count\n ");
    scanf("%f%f%f%f",&x,&y,&t,&m);
    tw=((x*26)+(y*34))*t;
    u=tw/1000.00;
    tu=u*m;
    if (tu<=100.00)
    {
        cost = tu*4.25;
    }
    else if (tu>100 && tu<=200)
    {
      tc1= 100.00*4.25;
      tc2=(tu-100.00)*6.50;
      cost=tc1+tc2;
    }
    else if (tu>200.00)
    {
        tc1= 100.00*4.25;
      tc2=100.00*6.50;
      tc3=(tu-200.00)*14;
      cost=tc1+tc2+tc3;
    }
    printf("The Total Unit %f unit\n The cost is %f taka", tu, cost);

    return 0;
}
