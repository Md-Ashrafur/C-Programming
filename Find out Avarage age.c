#include <stdio.h>
int main ()
{
   int p, a, tage, age, avgage;
   /*tage means Total age*/
   printf("Please input how many person you want to calculate___\n");
   scanf ("%d",&p);
   printf ("Input age of %d persons\n\n", p);
   tage=0;
   for (a=1; a<=p; a++)
   {
       scanf ("%d",&age);
       tage=tage+age;
   }
   avgage=tage/p;
   printf("The avarage age is %d",avgage);
   return 0;
}
