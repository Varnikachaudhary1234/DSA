#include<stdio.h>
int main(int argc, char const *argv[])
{

    int a[100],i,n,beg,end,mid,val;
    printf("enter the no. of elements of array");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    printf("enter the elements you want to search\n");
    scanf("%d",&val);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=val)
    {
       if(a[mid]<val){
        beg=mid+1;

       }
       if(a[mid]>val){
        end=mid-1;
       }
       mid=(beg+end)/2;
    }
    if (a[mid]==val){
        printf("%d is found at position %d",val,mid+1);
    }
    else{
        printf("unsuccessful search");
    }
    return 0;
}
