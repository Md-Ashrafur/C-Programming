#include <stdio.h>
int main ()
{
    int n,a,c=0;
    scanf ("%d",&n);
    for (a=2; a<=n; a++)
    {
        if (n%a==0)
        {
            c++;
        }
    }
    if (c=1)
    {
        printf ("%d is a prime number", n);
    }
    else
    {
        printf ("%d is not prime", n);
    }
    return 0;
}
