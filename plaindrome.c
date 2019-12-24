#include <stdio.h>
#include<string.h>
int main ()
{
    int i, a, n, j, p, c;
    char x[100], y[100];
    gets(x);
    p=strlen(x);
    c=0;
    j=p-1;
    for (i=0; i<p; i++)
    {
        y[i]=x[j];
        j--;
    }
    for(i=0; i<p; i++)
    {
        if (x[i]==y[i])
        {
            c++;
        }


    }
    if (c==p)
        {
            printf("\n\n This word is a palindrome (yes)\n");
        }
        else {
            printf("\n\nThis word is NOT a palindrome (No)\n");
        }

    return 0;


}
