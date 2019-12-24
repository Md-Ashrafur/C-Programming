#include <stdio.h>
#include<string.h>
int main ()
{
    int i, a, n, j, p, f;
    char x[100];
    gets(x);
    p=strlen(x);
    f=0;
    j=p-1;
   for (i=0; i<p/2; i++)
    {
        if (x[i]!=x[j])
        {
            f=1;
            break;
        }
        j--;
    }
   /*  for(i=0; i<p; i++)
    {
        if (x[i]==y[i])
        {
            c++;
        }


    }*/
    if (f==0)
        {
            printf("\n\n This word is a palindrome (yes)\n");
        }
        else {
            printf("\n\nThis word is NOT a palindrome (No)\n");
        }

    return 0;


}
