#include <stdio.h>
int main ()
{
    int n, f, a;
    printf("Please Input the number____");
    scanf("%d",&n);
    f=n;
    for(a=n-1; a>=1; a=a-1)
    {
      f=f*a;
    }
    printf("The factorial value of %d! is_ %d", n, f );
    return 0;
}
