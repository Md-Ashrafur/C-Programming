#include <stdio.h>
int main()
{
    int a, b, n, ans;
    scanf("%d%d",&b,&n);
    ans=1;
    for (a=1; a<=n; a++)
    {
        ans=ans*b;
    }
    printf("%d", ans);
}
