#include <stdio.h>
int main()
{
    int ib, mb, n, a, c;
    scanf ("%d",&n);
    printf ("Please Input %d mobile & Internet Bill\n", n);
    c=0;
    for (a=1; a<=n; a++)
    {
        scanf("%d%d",&ib,&mb);
        if (ib>mb)
        {
            printf("Internet Bill is greater than Mobile bill\n");
        }
        else if (mb>ib)
        {
            printf("Mobile Bill is greater than Internet Bill\n");
            c++;
        }
        printf("\n The number of BEKUB %d \n", c);
    }
    return 0;
}
