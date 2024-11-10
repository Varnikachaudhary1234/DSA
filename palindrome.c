#include<stdio.h>
void main(){
int original,n,d,rev=0;
printf("enter a digit");
scanf("%d",&n);
original=n;
while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;

}
if(rev==original)
    printf("number is palindrome");
else
    printf("not palindrome");

}
