#include<stdio.h>
#include <string.h>
int main ()
{
    int i, a;
    char x[100];
    gets(x);
    for(i=0; i<strlen(x); i++)
    {
        if(x[i]=='t' || x[i]=='T')
        {
            x[i]='*';
        }
    }
    printf("%s", x);
}
