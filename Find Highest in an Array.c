//Input same numbers an array and find highest number & display highest number location in ARRAy also
#include<stdio.h>
int main ()
{
    int a, x[100], i, n, max, t;
    scanf("%d",&n);
    printf("Input %d numbers___\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

    }
    max=x[0];
    for (i=0; i<n; i++)
    {
        if(x[i]>max)
        {
            max=x[i];
            t=i+1;
        }
    }
    printf("%d is highest number \n&\n The number location of array is %d", max, t);
    return 0;
}
