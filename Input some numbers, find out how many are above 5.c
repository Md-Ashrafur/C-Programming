#include<stdio.h>
int main()
{
    int n, x, a, c;
    scanf("%d",&n);
    c=0;
    a=0;
    while(a<=n)
    {
        scanf("%d",&x);
        if (x>5)
        {
            printf("\n %d is above 5\n", x);
            c++;
        }
        a++;
    }
    printf("\n\n\n Total %d are above 5", c);
    return 0;
}
