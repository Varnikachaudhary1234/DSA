#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            
           // printf("%d",i);
            printf("prime factor of %d is 2\n",i);
        }
        else{
            
            printf("the prime factor of %d is 1\n",i);      
              }
    }
    return 0;
}
