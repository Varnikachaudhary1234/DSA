#include<stdio.h>
int main()
{
    int a=18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf("%d",a<b<c>d);
    printf("%d",c+1>e);
    printf("%d",b==e);

    return 0;



}
