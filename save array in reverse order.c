#include <stdio.h>
int main()
{
    int i, j, x[100], y[100], n;
    printf("Please Input how many numbers____\n");
    scanf("%d",&n);
    printf("input %d numbers \n", n);
    i=0;
    while(i<n)
    {
        scanf("%d",&x[i]);
        i++;
    }
    printf("\n\n");
    i=n-1;
    for(j=0; j<n; j++)
    {
        y[j]=x[i];
        printf("%d ",y[j]);
        i--;

    }
    return 0;

}
