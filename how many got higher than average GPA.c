//Input some students term1 & term2 marks & find how many of them got higher than average
#include <stdio.h>
int main ()
{
    int n, i, a, c, d;
    float t[100], a1, a2, s1, s2;
    scanf("%d",&n);
    printf("Input %d students 1st terms mark & Then input %d students 2nd terms mark", n, n);
    a=1;
    c=d=0;
    for(i=0; i<n; i++)
    {
        scanf("%f",&t[a]);
        scanf("%f",&t[a+1]);
        a=a+2;

    }
    a=1;
    for(i=0; i<n; i++)
    {
        s1=s1+t[a];
        s2=s2+t[a+1];
        a=a+2;
    }
    a1=s1/n;
    a2=s2/n;
    a=1;
    for(i=0; i<n; i++)
    {
        if(t[a]>a1)
        {
            c++;
        }
        if(t[a+1]>a2)
        {
            d++;
        }
        a=a+1;
    }
    printf("%d sudents got higher than average in 1st Term \n & \n %d students got higher than average in 2nd Term", c,d);
    return 0;

}
