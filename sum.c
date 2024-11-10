#include<stdio.h>
int main(){
int a,i,sum=0;
for(i=0;i<5;i++)
    {
        printf("enter the numbers");
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("the sum is %d",sum);
    return 0;
}
