//Summation of each pair of an Array
#include<stdio.h>
int main ()
{
    int s, n, x[100], a, i;
    scanf("%d",&n);
    printf("Input %d numbers\n", n);
    a=1;
    for (i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    if (n%2==0)
    {
        n=n;
    }
    else
    {
        n=n-1;
    }
    for(i=0; i<n; i=i+2)
    {
        s=x[i]+x[i+1];
        printf("\nsummation of %dth pair is %d", a, s);
        a++;
    }
    return 0;
}
