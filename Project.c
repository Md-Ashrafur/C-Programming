//summation of TWO very integer number____
#include<stdio.h>
#include<string.h>
int main ()
{
    int i, x[100], y[100], p, q, r, z[100], c;
    char m[100], n[100];
    printf("Please Input two numbers...\n");
    scanf("%s",m);
    scanf("%s",n);
    p=strlen(m);
    q=strlen(n);
    c=0;
    for(i=0; i<p; i++)
    {
        if (m[i]=='1')
        {
            x[i]=1;
        }
        else if (m[i]=='2')
        {
            x[i]=2;
        }

         else if (m[i]=='3')
        {
            x[i]=3;
        }
         else if (m[i]=='4')
        {
            x[i]=4;
        }
         else if (m[i]=='5')
        {
            x[i]=5;
        }
         else if (m[i]=='6')
        {
            x[i]=6;
        }
         else if (m[i]=='7')
        {
            x[i]=7;
        }
         else if (m[i]=='8')
        {
            x[i]=8;
        }
         else if (m[i]=='9')
        {
            x[i]=9;
        }
        else if(m[i]=='0')
        {
            x[i]=0;
        }

    }
    for(i=0; i<q; i++)
    {
        if (n[i]=='1')
        {
            y[i]=1;
        }
        else if (n[i]=='2')
        {
            y[i]=2;
        }

         else if (n[i]=='3')
        {
            y[i]=3;
        }
         else if (n[i]=='4')
        {
            y[i]=4;
        }
         else if (n[i]=='5')
        {
            y[i]=5;
        }
         else if (n[i]=='6')
        {
            y[i]=6;
        }
         else if (n[i]=='7')
        {
            y[i]=7;
        }
         else if (n[i]=='8')
        {
            y[i]=8;
        }
         else if (n[i]=='9')
        {
            y[i]=9;
        }
        else if(n[i]=='0')
        {
            y[i]=0;
        }

    }
    if(p>q)
    {
        r=p;
    }
    else
    {
        r=q;
    }

    for(i=r; i>=0; i--)
    {
        z[i]=x[i]+y[i]+c;
        c=0;
        if(z[i]>9 && i!=0)
        {
            c=z[i]/10;
            z[i]=z[i]%10;

        }


    }
    for (i=0; i<=r; i++)
    {
        printf("%d",z[i]);
    }




}
