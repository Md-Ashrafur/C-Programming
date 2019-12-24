#include <stdio.h>
int main ()
{
   int subjectNumber, i,s;
   float cgpa, credit, result, result2, finalResult, totalCredit;
   printf("Enter how many subject you want too calculate: ");
   scanf("%d",&subjectNumber);
   s=1; // for showing serial
   for (i=0; i<subjectNumber; i++)
   {
       printf("Enter %d th CGPA \n Then, Enter co-responding Credit\n", s);
       scanf("%f %f",&cgpa,&credit);
       result = cgpa*credit;
       result2+= result;
       totalCredit+=credit;
       s++;
   }

   finalResult=result2/totalCredit;

   printf("CGPA is: %f", finalResult);

   return 0;


}
