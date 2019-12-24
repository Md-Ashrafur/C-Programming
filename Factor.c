#include <stdio.h>
int main ()
{
    int n, a;
    scanf ("%d",&n);
    printf ("The factors of %d are:\n",n);
    for (a=1; a<=n; a++)
    {
        if (n%a==0)
        {
            printf ("%d\n", a);
        }

    }
    return 0;
}
