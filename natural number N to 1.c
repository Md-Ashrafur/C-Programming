#include <stdio.h>
int main()
{
    int n, a, b, i;
    printf("Please Input N:");
    printf("\n");
    scanf ("%d",&n);
    for (i=n; i>=2; i--)
    {
        printf("%d,  ", i);
    }
    printf("1.");
    return 0;
}
