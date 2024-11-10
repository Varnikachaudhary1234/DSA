#include<stdio.h>
int main(){
int a[10],min,max,i,num;
printf("enter the no. of elements");
scanf("%d",&num);
printf("enter the numbers");

for(i=0;i<num;i++){

    scanf("%d",&a[i]);}
    max=a[0];
    min=a[0];
for(i=1;i<num;i++){
    if(min>a[i])
        min=a[i];
    if(max<a[i])
        max=a[i];
}
printf("the min no. is %d\n",min);
printf("the max no. is %d\n",max);
return 0;
}
