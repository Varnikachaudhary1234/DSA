#include<stdio.h>
int main()
{
    int n,i,e=0,o=0,arr[100];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=i+1;
        }
        int arre[n/2];
        int  arro[n/2];
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                arre[e]=arr[i];
                e++;
            }
            else{
                arro[o]=arr[i];
                o++;
            }
        }
        for(i=0;i<n/2;i++)
            printf("%d",arro[i]);
         for(i=n/2-1;i>0;i--)
            printf("%d",arre[i]);
        



    
    return 0;
}
