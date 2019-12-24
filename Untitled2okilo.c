#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, n,c;
    char x[100];
    scanf("%d",&n);
    c=0;
    for(i=0; i<n; i++)
    {
        scanf("%s", x);
        for (j=0; j<strlen(x); j++)
        {
            if (x[j]==x[j+1])
            {
                c++;
            }
        }
    }
    printf("%d consecutive position", c);
}
