#include<stdio.h>
int main(){
int a[10],i,n,max,smax,loc_max,loc_smax;
printf("enter the number of elemnts");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);


}
max=a[0];
smax=a[0];
for(i=1;i<n;i++){
    if(max<a[i])
        max=a[i];
        loc_max=i;
}
for(i=1;i<n;i++){
    if(i!=loc_max){
        if(smax<a[i])
            smax=a[i];
            loc_smax=i;
    }
}
printf("the max no.is %d\n",max);
printf("the smax no. is %d\n",smax);
return 0;
}

