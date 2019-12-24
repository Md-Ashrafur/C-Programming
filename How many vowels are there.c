#include<stdio.h>
#include<string.h>
int main()
{
    int i, c, k;
    char y[100], v[]=("aeiouAEIOU");
    /*
    If i use this v[11]=("aeiouAEIOU") its a word in first bracket so its take a null,
     so position should be 1+ = v[11] or it remain blank that i use

     or
     we use v[]={1,2,'f',5}

     or
     after declaring variable such as "char v[3]; " then we set the value separately i.e :" v[0]=2, v[1]='t', v[2]=7; "

      */
    scanf("%s",y);
    c=0;
    for(i=0; i<strlen(y); i++)
    {
        for(k=0; k<10; k++)
        {
            if(y[i]==v[k])
       {
           c++;
       }
        }

    }
    printf("%d", c);
}
