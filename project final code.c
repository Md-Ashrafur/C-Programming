#include<stdio.h>
#include<string.h>
int main ()
{
    int i, x[100], y[100], p, q, r, z[100], c, a;
    char m[100], n[100];
    printf("Please Input 1st numbers: ");
    scanf("%s",m);
    printf("Please Input 2nd numbers: ");
    scanf("%s",n);
    p=strlen(m);
    q=strlen(n);

    //Converting String to Integer......
    for(i=0; i<p; i++)
    {
        x[i]=(int)m[i]-48;

    }
    for(i=0; i<q; i++)
    {
        y[i]=(int)n[i]-48;
    }



    //Checking which Array length is bigger
    if(p>q)
    {
        r=p;
    }
    else
    {
        r=q;
    }



    //Equaling length of both array......
    if(p>q)
    {
        a=p-1;
        for(i=q-1; i>=0; i--)
        {
            y[a]=y[i];
            a--;
        }
        for(i=0; i<(p-q); i++)
        {
            y[i]=0;
        }

    }
    else if(q>p)
    {
        a=q-1 ;
        for(i=p-1; i>=0; i--)
        {
            x[a]=x[i];
            a--;
        }
        for(i=0; i<(q-p); i++)
        {
            x[i]=0;
        }


    }



    //Displaying the converted value of both integer array
    printf("\n\n 1st Number is:     ");
    for(i=0; i<r; i++)
    {
        printf("%d",x[i]);
    }

    printf("\n 2nd Number is: (+) ");

    for(i=0; i<r; i++)
    {
        printf("%d",y[i]);
    }

    printf("\n_____________________________________________________\n");



    //Main calculation Part.......
    c=0;
    for(i=r-1; i>=0; i--)
    {
        z[i]=x[i]+y[i]+c;
        c=0;
        if(z[i]>9 && i!=0)
        {
            c=z[i]/10;
            z[i]=z[i]%10;

        }
    }



    //Displaying the RESULT.........
    printf("Sum of two numbers: ");
    for (i=0; i<r; i++)
    {
        printf("%d",z[i]);
    }
    printf("\n\n");
    return 0;
}
