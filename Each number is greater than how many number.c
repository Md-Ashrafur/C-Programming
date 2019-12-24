#include <stdio.h>
int main()
{
    int a, n,i, x[100], c;
    printf("please input how many of numbers you want to Input-  ");
    scanf("%d",&n);
    printf("Input %d Numbers\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=0; i<n; i++)
    {
        c=0;
        for(a=0; a<n; a++)
        {
            if(x[i]>x[a])
            {
                c++;
            }
        }
        printf("\n%d is greater than %d numbers", x[i], c);
    }
}
