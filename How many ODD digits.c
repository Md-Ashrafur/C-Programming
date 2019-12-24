#include <stdio.h>
int main()
{
    int x, n, c;
    printf("Please input a number__\n");
    scanf("%d",&n);
    c=0;
    for (; ;)
    {
        x=n%10;
        n=n/10;
        if (x%2==1)
        {
            c++;
            printf ("\n%d is an odd number\n", x);
        }
        if (n==0)
        {
            break;
        }
    }
    if (c==0)
    {
        printf("There is no ODD digit");
    }
    else
    {
        printf("\n\n Total odd number of given Digit are %d", c);
    }
}
