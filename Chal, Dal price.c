#include <stdio.h>
int main()
{
    int pt, dal, rice, ptc, dalc, ricec, totalc, remain;
    scanf ("%d%d%d",&pt,&dal,&rice);
    ptc=pt*70;
    dalc=dal*60;
    ricec=rice*50;
    totalc=ptc+dalc+ricec;
    remain=1000-totalc;
    printf ("total cost is %d tk/n Remain in hands %d tk", totalc, remain);
    return 0;


}
