#include <stdio.h>
int main ()
{
    float d1, d2, ans;
    char ch;
    scanf ("%f%f",&d1,&d2);
    scanf("%c",&ch);
    if (ch=='+')
    {
        ans=d1+d2;
    }
    else if (ch=='*')
    {
        ans=d1*d2;
    }
    else if (ch=='-' && d1>d2)
    {
        ans=d1-d2;
    }
    else if (ch=='-' && d1<d2)
    {
        ans=d2-d1;
    }
    else if (ch=='/' && d2!=0)
    {
        ans=d1/d2;
    }
    else if (ch=='/' && d2==0)
    {
    printf ("Can not divided by Zero");
    }
    printf("%f %f = %f", d1, d2, ans);
    return 0;
}
