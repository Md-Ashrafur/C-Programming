#include<stdio.h>
int main()
{
    float x,y;
    scanf ("%f%f",&x,&y);
    /*printf ("x=");
    printf ("y=");*/
    if(x>=0&&y>=0)
    {
        printf("the point lies in the 1st QUADRANT ");
    }
    else if (x<0&&y>=0)
    {
         printf("the point lies in the 2nd QUADRANT ");
    }
    else if (x<0&&y<0)
    {
         printf("the point lies in the 3rd QUADRANT ");
    }
    else if(x>0&&y<0)
    {
         printf("the point lies in the 4th QUADRANT ");
    }
    return 0;
}
