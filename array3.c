#include<stdio.h>
int main()
{
    int a[100],search,i,n;
    printf("enter the no.of element:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         }

    printf("enter the element you want to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
       if (a[i]==search){
          printf("%d is found at location %d\n",search,i+1);
          break;
       }
    }
    if(i==n){
        printf("%d is not present in the array\n",search);

    }

    return 0;
}
