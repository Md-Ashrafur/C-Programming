#include <stdio.h>
int main ()
{
    int a, age, c, n;
    scanf("%d",&n);
    c=0;
    printf ("input %d persons age\n", n);
    for (a=1;a<=n;a++)
    {
        scanf("%d",&age);
        if (age>=13 && age<=19)
        {
            printf ("this Person is a Teenager\n");
            c++;
        }
        else
        {
            printf ("This Person not a Teeenager\n");
        }


//printf("The number of teenager is %d", c);
    }
    printf ("The number of teenager is %d", c);
}
