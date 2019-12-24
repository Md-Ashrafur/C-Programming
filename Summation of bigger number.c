#include<stdio.h>
int main()
{
    int n,i,x,a,sum=0;
    scanf("%d",&n);
    a=-9999;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>a){
            sum=sum+x;
        }
        a=x;
    }
    printf("%d",sum);
    return 0;
}
