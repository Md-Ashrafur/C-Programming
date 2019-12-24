#include <stdio.h>
int main()
{
    int b, c, d;
    printf("Please input numbers\n");
    d=0;
    c=0;
    for (;;)
    {
        scanf("%d",&b);
        if (b>c)
        {
            d++;
            c=b;
        }
        else
        {
           break;
        }
    }
    printf("%d numbers are Increasing order", d);
    return 0;
}
