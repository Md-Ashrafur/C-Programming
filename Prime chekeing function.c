#include<stdio.h>
int prime(int a);

int prime(int a)
{
    int i, c;
    c=0;
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
    }
    if (c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int i, x[100], n, y, c;
    scanf("%d",&n);
    c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        y=prime(x[i]);
        if(y==1)
        {
            c++;
            //printf("\n yes %d is prime \n", x[i]);

        }
    }
    printf("\n\n%d numbers are prime numbers", c);
}
