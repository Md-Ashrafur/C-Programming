#include <stdio.h>
int main()
{
    int n, b, c, d, i;
    printf("Please input numbers\n");
    scanf ("%d",&n);
    printf("Please %d input numbers\n", n);
    d=1;
    scanf("%d",&b);
    c=b;
    for (i=2; i<=n; i++)
    {
        scanf("%d",&b);
        if (b>c)
        {printf("Please %d input numbers\n", n);
            d++;

        }
        else
        {
            printf("\n %d numbers are Increasing order\n\n", d);
            d=1;
            continue;
        }
        c=b;
    }

    return 0;
}
