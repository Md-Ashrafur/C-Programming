//Input some numbers , how many numbers are greater than previous??
 #include<stdio.h>
 int main ()
 {
     int n, x, a, c, i;
     scanf("%d",&n);
     printf("Input %d numbers\n", n);
     scanf("%d",&a);
     c=0;
     for(i=1; i<n; i++)
     {
         scanf("%d",&x);
         if (x>a)
         {
             c++;
         }
         a=x;
     }
     printf("%d numbers are greater than previous ", c);
     return 0;
 }
