#include <stdio.h>
#include <math.h>
int main ()
{
    float wl, ww, tl, tw, rt;
    printf("Input wall length & width=")
    scanf ("%f%f%f%f",&wl,&ww,&tl,&tw);
    rt=ceil(wl/tl)*ceil(ww/tw);
    printf ("Reqired Tiles %f", rt);
    return 0;

}
