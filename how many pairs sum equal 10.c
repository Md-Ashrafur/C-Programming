#include <stdio.h>
int main()
{
    int a, n,i, x[100], c, gn;
    printf("please input how many of numbers you want to Input & then the greater number-  ");
    scanf("%d",&n);
    printf("\n");
    scanf("%d",&gn);
    printf("Input %d Numbers\n", n);
    c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

    }
    for(i=0; i<n; i++)
    {
        for(a=(i+1); a<n; a++)
        {
            if(x[i]+x[a]>gn)
            {
                c++;
                printf("\n %d + %d > %d", x[i], x[a], gn);
            }
        }
    }
    printf("\n%d pairs sum is greater than %d", c, gn);
}
