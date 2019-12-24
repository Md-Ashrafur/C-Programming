#include<stdio.h>
int main(){
int a,pow,base,ans;
ans=1;
scanf("%d%d",&base,&pow);
for(a=1;a<=pow;a++){
    ans=ans*base;
}
printf("%d",ans);
return 0;
}
