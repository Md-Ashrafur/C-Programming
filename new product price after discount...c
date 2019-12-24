#include <stdio.h>
int main()
{
    int p, a;
    float pp, d, np;
    printf("Please input how many products you want to calculate\n");
    scanf("%d",&p);
    printf("Give the Orginal price & Discount rate of %d products\n", p);
    p=0;
    for (a=1; a<=p; a++)
    {
        scanf ("%f%f",&pp,&d);
        np=pp-(d/100.00)*pp;
        printf ("New price is %f Taka\n", np);


    }
return 0;
}
