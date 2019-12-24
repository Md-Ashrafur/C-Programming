#include <stdio.h>
int main()
{
    int x[100], avg, n, a, c, s;
    printf("Input total numbers___\n");
    scanf("%d",&n);
    printf("Input %d numbers ___\n", n);
    c=0;
    s=0;
    for(a=0; a<n; a++)
    {
        scanf("%d",&x[a]);
        s=s+x[a];
    }
    avg=s/(float)n;
    for(a=0; a<n; a++)
    {
        if(x[a]>avg)
            c++;
    }
    printf("The Average is %d\n   &\n %d numbers are above their average", avg, c);
}
