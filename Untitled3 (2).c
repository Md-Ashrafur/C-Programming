#include <stdio.h>
int main ()
{
    int x, a, i, n, c;
    printf("Please input the number how many numbers you want to count\n");
    scanf("%d",&n);
    c=0;
    a=0;
    for (i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if (x>a)
        {
            c++;
        }
        a=x;

    }
    printf("%d numbers are greater than others", c);
    return 0;
}
