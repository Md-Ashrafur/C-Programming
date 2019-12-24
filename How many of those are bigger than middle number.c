#include <stdio.h>
int main()
{
    int n, x[100], i, mid, c;
    scanf("%d",&n);
    printf("Input %d numbers ", n);
    c=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    if(n%2!=0)
    {
        mid=x[n/2];
    }
    else if(n%2==0)
    {
        mid=(x[n/2]+x[n/2-1])/2;

    }
    printf ("%d is middle value\n", mid);
    for (i=0; i<n; i++)
    {
        if (i==n/2 || i==n/2-1)
        {
            continue;
        }
        if (x[i]>mid)
        {
            c++;
            printf("%d is greater than middle\n", x[i]);
        }
    }
    printf("\n%d numbers are greater than middle", c);
}
