#include <stdio.h>
int main ()
{
    int num[100], i, n, mid, c;
    printf("Please input how many number you want to calculate___");
    scanf("%d",&n);
    printf("Input %d numbers--\n", n);
    c=0;
    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);

    }
    if (n%2==0)
    {
        mid=num[n/2];
    }
    else if (n%2!=0)
    {
        mid=(num[n/2]+num[n/2-1])/2;
    }
    for (i=0; i<n; i++)
    {
        if(num[i]>mid && i!=n/2 && i!=n/2-1)
        {
            c++;
            printf("\n\n%d no. number\n & \n The number is %d \n", i, num[i]);
        }
    }
    printf("\n\n\n %d are bigger than Middle number", c);
}
