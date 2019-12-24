#include <stdio.h>
#include<string.h>
int main ()
{
    int i, p;
    char x[100];
    gets(x);
    p=strlen(x)-1;


    if(x[0]==x[p])
    {
        printf("YES, 1st leeter & Last are same");

    }

        else
        {
            printf("NO, they are not same");
        }
}

