#include <stdio.h>
int main()
{
    int n, d, c, i;
    printf("Please Input How many numbers you want to calculate___\n");
    scanf("%d",&n);
    printf("please Input %d numbers___\n ", n);
    c=0;
    for (i=1; i<=n; i++)
    {
        scanf("%d",&d);
        if (d%5==0 || d%7==0)
        {
            c++;
        }
    }
    printf("%d numbers are multiple by 7 or 5", c);
    return 0;
}
