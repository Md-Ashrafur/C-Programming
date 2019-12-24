#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf  ("ENTER THE NUMBER OF A YEAR :\n");
    printf("_________________________________\n\n\n");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
        {
            printf("ITS A LEAP YEAR");
        }

    //OR WE CAN USE THIS CODE (A DESIGNED BY ARMAN NAIM)

    /*if(year%400==0)
    {
        printf("ITS A LEAP YEAR");
    }
    else if(year%100==0)
    {
        printf("ITS NOT A LEAP YEAR");
    }
    else if(year%4==0)
    {
        printf("ITS A LEAP YEAR");
    }*/
    else
    {
        printf("ITS NOT A LEEAP YEAR");
    }
    return 0;
}
