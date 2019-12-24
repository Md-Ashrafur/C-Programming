#include <stdio.h>
int main ()
{
    int n1, n2;
    scanf ("%d%d",&n1,&n2);
    printf ("1st number is %d\n 2nd number is %d" n1, n2);
    if (n1%n2==0 && n2%n1==0)
    {
        printf ("Divisible by one another");
    }
    else if (n1%n2==0)
    {
        printf ("1st number is divisible by 2nd number");

    }
    else if (n2%n1==0)
    {
        printf ("2nd number is divisible by 1st number");
    }
    else {
        printf ("Can not divisible by one another");
    }
    return 0;

}
