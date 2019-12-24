
#include <stdio.h>
int main()
{
    float a,b,c,determinator, x1,x2,real,imaginary;
    printf ("enter coffincients a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    determinator = b*b-4*a*c;
    if(determinator>0)
    {
        x1=-b+sqrt(determinator)/(2*a);
        x2=(-b-sqrt(determinator)/(2*a));

        printf ("roots of the eqn are : %f and %f",x1,x2);

    }
    else if (determinator== 0)
    {

        x1=x2=-b/(2*a);
        printf("roots of the eqn are : %f and %f", x1,x2);

    }
    else
    {
        real =-b/(2*a);
        imaginary =sqrt(-determinator)/(2*a);
        printf("roots are:%f + %fi and %f - %fi",real, imaginary);

    }
