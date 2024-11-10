#include<stdio.h>
int main(){
int n,i,fibonacci[10];
printf("enter the number");
scanf("%d",&n);
fibonacci[0]=0;
fibonacci[1]=1;
for(i=2;i<n;i++){
    fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
}
printf("the fibonacci series is:");
for(i=0;i<n;i++){
        printf("%d\n",fibonacci[i]);}
return 0;

}
