#include <stdio.h>
int main ()
{
    int x, n, a, c;
    printf("Input how many numbers you want to calculate___\n");
    scanf("%d",&n);
    printf("Input %d numbers__\n\n", n);
    c=0;
    a=1;
    while (a<=n)
    {
        scanf("%d",&x);
        if (x>5)
        {
            printf("%d is above 5\n", x);
            c++;
        }
        else
        {
            printf ("%d is not above 5\n", x);
        }
        a++;
    }
        printf("\n\n%d numbers are above 5", c);
}
