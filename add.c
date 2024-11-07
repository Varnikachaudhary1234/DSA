#include<stdio.h>
int main()
{
    int num,sum=0,d;
    printf("enter the digit");
    scanf("%d",&num);
    while(num>0 || sum>9){
            if(num==0){
                num=sum;
                sum=0;
            }
           d=num%10;
           sum+=d;
           num=num/10;}
printf("the single digit sum is %d",sum);
return 0;
}

