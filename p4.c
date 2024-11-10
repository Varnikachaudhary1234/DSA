#include<stdio.h>
int main(){
float c,f;
printf("enter the fahrenheit");
scanf("%f",&f);
c=((f-32.0)*5.0/9.0);
printf("the temperature in celsius is %f",c);
return 0;
}
