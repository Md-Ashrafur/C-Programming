#include <stdio.h>
int main()
{
    int a, n,i, x[100], b, c;
    printf("please input how many of numbers you want to Input-  ");
    scanf("%d",&n);
    printf("\n");
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
            for(b=(a+1); b<n; b++)
            {
                if(x[i]+x[a]+x[b]==20)
                {
                   printf("\n%d + %d + %d = 20", x[i], x[a], x[b]);
                    c++;
                }
            }
        }

    }
    printf("\n%d triple numbers are equal 20", c);
}
