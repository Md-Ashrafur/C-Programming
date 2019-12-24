#include <stdio.h>
int main()
{
    float cgpa;
    int n, c, a;
    printf("Input Total Student number\n");
    scanf("%d",&n);
    printf("Input %d students cgpa\n", n);
    c=0;
    for (a=1;a<=n;a++)

    {
        scanf ("%f",&cgpa);
        if (cgpa>=3.5)
        {
            c++;
        }

    }
    printf ("%d students achieved more than 3.5", c);
}
