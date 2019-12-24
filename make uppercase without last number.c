#include <stdio.h>
#include<string.h>
int main ()
{
    int i, p;
    char x[100];
    gets(x);
    p=strlen(x)-1;
    for(i=0; i<p; i++)
    {
    if (i!=1 && x[i]>='a' && x[i]<='z')
        {
        x[i]=x[i]-32;
        }
    }
    printf("%s", x);
}
