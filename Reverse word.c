#include <stdio.h>
#include<string.h>
int main ()
{
    int i, a, n, j, p;
    char x[100], y[100];
    gets(x);
    p=strlen(x);
    j=p-1;
    for (i=0; i<p; i++)
    {
        y[i]=x[j];
        j--;
    }
    y[p]=NULL;
    printf("%s", y);
    return 0;


}
