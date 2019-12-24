#include<stdio.h>
#include<string.h>
int main()
{
    int j, i, l, c;
    char x[10][100], v[]={'a','e','i','o','u','A','E','I','O','U'};
    c=0;
    for(i=0; i<10; i++)
    {
        scanf("%s",x[i]);
        for(j=0; j<strlen(x[i]); j++)
        {
            for(l=0; l<10; l++)
            {
                if(x[i][j]==v[l])
                {
                    c++;
                }
            }
        }


    }
    printf("Number of vowel of given words are %d", c);

}
