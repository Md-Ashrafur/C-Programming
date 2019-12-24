#include <stdio.h>
int main()
{
    int n, p, a;
    scanf("%d",&n);
    printf("The Prime Number between 1 to N are______\n\n");
    for (a=1; a<=n; a++)
    {
        if (n%a==0)
        {
            printf ("%d\n",a);
        }
    }
    return 0;
}
