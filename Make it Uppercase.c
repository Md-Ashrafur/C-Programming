#include <stdio.h>
#include<string.h>
int main ()
{
    int i, p;
    char x[100];
    gets(x);
    p=strlen(x);
    for(i=0; i<p; i++)
    {
        if (x[i]>='a' && x[i]<='z')
        {
        x[i]=x[i]-32;
        }
    }
    printf("%s", x);
}
