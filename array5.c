#include<stdio.h>
int main()
{
int a[10],b[10],c[20],m,n,i,j,k;
printf("enter the no.of elements");
scanf("%d",&m);
printf("enter the array elements");
for(i=0;i<m;i++){
scanf("%d",&a[i]);}
printf("enter the no.of elements");
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%d",&b[j]);}

while(i<m&&j<n){
if(a[i]<b[j]){
c[k]=a[i];
i+=1;
k++;
}
else{
c[k]=b[j];
j+=1;
k++;

}}
while(i<m){
c[k]=a[i];
k+=1;
i+=1;}
while(j<n){
c[k]=b[j];
k+=1;
j+=1;}
printf("the merged array is %d",c[i]);
for( int i=0;i<m+n;i++){
printf("%d",c[i]);
}
return 0;
}
