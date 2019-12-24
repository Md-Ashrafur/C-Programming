#include <stdio.h>
#include <math.h>
int main ()
{
    int n, f, a;
    printf("Please Input the number____");
    scanf("%d",&n);
    f=1;
    for(a=n; a>=1; a=a-1)
    {
      f=f*a;
    }
    printf("The factorial value of %d! is_ %d", n, f );
    return 0;
}
