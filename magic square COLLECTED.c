#include<stdio.h>
int maxsum(int x[], int n){
int max1,max2,k;
max1=0;
max2=0;
for(k=0;k<n;k++){
        max1=max1+x[k];
if(max1<0){
    max1=0;
}
else if(max2>max1){
    max2=max1;
return max2;
}
}
int main(){
int x[10], a,n,ans,max,max2;
scanf("%d",&n);
for(a=0;a<n;a++){
    scanf("%d",&x[a]);
}
ans=maxsum(x[]);
printf("%d",ans);
}
