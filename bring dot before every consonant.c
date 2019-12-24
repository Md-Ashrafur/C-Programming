#include<stdio.h>
#include<string.h>
int main()
{
    int i, a;
    char x[100];
    gets(x);
    for(i=0; i<strlen(x); i++)
    {
        if(x[i]>'A' && x[i]<='Z' && x[i]!='Y' && x[i]!='E' && x[i]!='I' && x[i]!='O' && x[i]!='U')
        {
            x[i]=x[i]+32;
        }
        if(x[i]>='a' && x[i]<='z')
        {
            printf(".%c", x[i]);
        }

    }
return 0;

}
