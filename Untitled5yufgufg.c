#include <stdio.h>
int main ()
{
 int n,a,sum;
 scanf ("%d",&n);
 sum=0;
 for (a=1; a<=n; a++)
 {
     if (n%a==0)
     {
         sum=sum+a;
         if(sum==n)
            printf("%d is a perfect number", n);
            break;
     }

 }
 if (sum!=n){
    printf("%d is not a perfect number", n);
 }
 return 0;
}
