#include<stdio.h>

int main()
{
   int x;
   printf("Please enter a number:\n For create a file press 2\n For read a file press 1\n For edit a file press 3\n ");
   scanf("%d",&x);

   if(x==1)
   {
         read();
   }
     else if (x==2)
     {
           write();
     }
     else
     {
           edit ();
     }

}

void read()
{
       FILE *a;
       a=fopen("text.txt", "r");
int z;
char c[100];
while(!feof(a))
{
       fscanf(a,"%s%d",c,&z);
       printf("%s   %d\n", c, z);

}
}

void write()
{
       FILE *a;
       a=fopen("text.txt","w");
       int s, i;
       char vdc[100];
       for(i=0; i<2; i++)
       {
       scanf("%s%d",vdc,&s);
       fprintf(a,"%s  %d\n", vdc, s);
       }

}

void edit ()
{
       FILE *a;
       a=fopen("text.txt", "a");
       int s, i;
       char vdc[100];
       for(i=0; i<2; i++)
       {
       scanf("%s%d",vdc,&s);
       fprintf(a,"%s  %d\n", vdc, s);
       }


}
