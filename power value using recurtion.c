#include<stdio.h>
int power(int a, int b);
int power(int a, int b)
{
     int p;
     if(b==1)
     {
         return a;
     }
     else
     {
       p=a*power(a,b-1);
       return p;
     }

}
int main()
{
     int x, y, ans;
     scanf("%d%d",&x,&y);
     ans=power(x,y);
     printf("%d", ans);
}
