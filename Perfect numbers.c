#include <stdio.h>
int main ()
{
 int n,a,sum, t;
 printf("Please input the number________\n");
 scanf ("%d",&n);
 sum=0;
 t=0;
 for (a=1; a<=n; a++)
 {
     if (n%a==0)
     {
         sum=sum+a;
         if(sum==n)
         {
             t=1;
         }

     }

 }
 if (t==1){
    printf("%d is a perfect number", n);
 }
 else
 {
     printf("%d is not a perfect number", n);
 }
 return 0;
}
