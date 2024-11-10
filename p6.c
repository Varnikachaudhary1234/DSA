#include<stdio.h>
int main()
{
    int age,salary;
    printf("enter the age and salary");
    scanf("%d%d",&age,&salary);
    if(age>50)
        if(salary<60000){
        salary+=10000;
        printf("\n%d is the new salary",salary);}
        else{
            salary+=5000;
            printf("\n%d is the new salary",salary);}
    else{
        salary+=3000;
        printf("\n%d is the new salary",salary);}
printf("\n thanks for using our program");


}
