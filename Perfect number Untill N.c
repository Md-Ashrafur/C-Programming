#include <stdio.h>
int main ()
{

    int n,a,i, c, d;
    Printf("Please Input The last number___\n");
    scanf("%d",&n);
    c=0;

    for(a=1; a<=n; a++)
    {
        for (i=2; i<=a; i++)
        {
            if(a%d==0)
            {
                c++;

            }
            if (c==0)
            {
                printf ("%d", i);
            }

        }
    }
}



