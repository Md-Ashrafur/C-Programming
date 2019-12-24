#include<stdio.h>
int main()
{
    int x[100][100], i, j, n, k, sum[100], flag;
    printf("please Input your magic square size ");
    scanf("%d",&n);
    printf("\n\nplease input your data from left to right & then go to next line\n");
    flag=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0; i<100; i++)
    {
        sum[i]=0;
    }


    /*Displaying your given magic square*/
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("     %d", x[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum[i]=sum[i]+x[i][j];
        }
    }
    k=i+1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum[k]=sum[k]+x[i][j];
            }
        }
    }
    k=k+1;
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            sum[k]=sum[k]+x[i][j];
        }
        k++;
    }
    i=0;
    j=n-1;
    while(i!=n)
    {
        sum[k]=sum[k]+x[i][j];
        i++;
        j--;
    }
    for(i=1; i<=k; i++)
    {
        if(sum[i]!=sum[0])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES,\n This is a MAGIC SQUARE\n\n");
    }
    else
    {
        printf("NO,\n this is NOT a MAGIC SQUAARE\n\n");
    }

}
