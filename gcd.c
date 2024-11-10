#include<stdio.h>
int gcd(int,int);
void main(){
int a,b,g;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
g=gcd(a,b);
printf("the hcf of %d and %d is %d",a,b,g);
}
int gcd(int n1,int n2){
if(n2==0)
    return 0;
else
    return gcd(n2,n1%n2);

}
