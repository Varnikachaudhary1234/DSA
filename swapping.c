#include<stdio.h>
int main(){
 int a,b,c;
       printf("enter two numbers");
       scanf("%d%d",&a,&b);
       printf(" the numbers before swapping is :%d %d\n",a,b);
        c=a;
        a=b;
        b=c;
        printf(" the numbers after swapping is :%d %d\n",a,b);
return 0;
}