#include <stdio.h>
int main ()
{
    int n, a;
    scanf ("%d",&n);
    printf ("The divisible numbers (below 20) of %d are:\n",n);
    for (a=1; a<20; a++)
    {
        if (n%a==0)
        {
            printf ("%d\n", a);
        }

    }
    return 0;
}
