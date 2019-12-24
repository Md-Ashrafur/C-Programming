#include<stdio.h>
int main()
{
    int n, p, age, b, avgage;
    printf ("Input how many person you want to calculate\n");
    scanf ("%d",&n);
    printf("Please input %d persons age........\n", n);
    p=0;
    for (b=1; b<=n; b++)
    {
        scanf ("%d",&age);
        p=p+age;
    }
    avgage=p/n;
    printf ("The average is %d", avgage);
    return 0;
}
