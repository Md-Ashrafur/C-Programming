#include <stdio.h>
int main()
{
    int a, n,i, x[100], c, flag;
    printf("please input how many of numbers you want to Input-  ");
    scanf("%d",&n);
    printf("Input %d Numbers\n", n);
    c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        flag=0;
        for(a=2; a<x[i]; a++)
        {

            if (x[i]%a==0)
            {
                flag=1;
            }

        }
        if (flag==0)
        {
            printf("%d is Prime Number\n", x[i]);
            c++;
        }
    }
    printf("\n\n%d are prime number", c);
    return 0;
}
