#include <stdio.h>
#include<string.h>
int main ()
{
    int i,c;
    char x[100];
    gets(x);
    c=0;
    for (i=0; i<strlen(x)-1; i++)
    {
        if(x[i]>x[i+1])
        {
            c=1;
            break;
        }
        continue;
    }
    if (c==1)
    {
        printf("NO");
    }
    else{
        printf("YES");
    }

}
