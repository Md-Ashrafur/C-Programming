#include<stdio.h>
#include<string.h>
int main()
{
    int i, c, k;
    char y[100];
    scanf("%s",y);
    c=0;
    for(i=0; i<strlen(y); i++)
    {
            if(isvowel(y[i])==true)
       {
           c++;
       }


    }
    printf("%d", c);
}
