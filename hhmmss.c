#include <stdio.h>
#include <math.h>
int main()
{
    int s, s1, hh,mm,ss;
    scanf ("%d",&s);
    hh=s/3600;
    s1=s%3600;
    mm=s1/60;
    ss=s1%60;
    printf ("The TIME is hh:mm:ss = %d:%d:%d", hh, mm,ss);
    return 0;
}
