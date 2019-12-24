#include <stdio.h>
int main()
{
    int n, a, b, i;
    printf("Please Input N:");
    printf("\n");
    scanf ("%d",&n);
    for (i=1; i<=(n-1); i++)
    {
        printf("%d,  ", i);
    }
    printf("%d.", n);
    return 0;
}
