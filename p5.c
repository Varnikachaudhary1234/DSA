#include<stdio.h>
int numbers(int n)
{
if (n==1){
printf("%d\t",n);
return 1;
}
numbers(n-1);
printf("%d\t",n);
}
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
numbers(num);
return 0;}
