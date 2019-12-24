#include <stdio.h>
#include<math.h>
int main()
{

    float x1,x2,y1,y2,d,r,A,pi;
    pi=3.1416;
    //scanf("%f",&A);
    scanf("%f%f%f%f%f",&x1,&x2,&y1,&y2,&A);

    r=sqrt(A/pi);
  //printf("the value of redius=%f",r);
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));


    if(d<=r)
    {
        if(d<=1)
        {
            printf("instant death100%");
        }
        else if (d>1&&d<=2)
        {
            printf("instant death 50%");
        }
        else if (d>2&&d<=3)
        {
            printf("instant death 10%");
        }
        else if (d>3&&d<r)
        {
            printf("instant death  5%");
        }

        }
        else
        {
            printf("Later,people will be affected by radiation,storm etc.");
        }

    return 0;
}
