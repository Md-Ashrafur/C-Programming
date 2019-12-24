#include<stdio.h>
int factorial(int a);
int factorial(int a)
{
     int f;
     if(a==1)
     {
         return 1;
     }
     else
     {
       f=a*factorial(a-1);
       return f;
     }

}
int main()
{
     int x, ans;
     scanf("%d", &x);
     ans=factorial(x);
     printf("%d", ans);
}

