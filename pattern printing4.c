#include<stdio.h>
int main(){
int i,j,n=1;
for(i=1;i<=4;i++){
    for(j=1;j<=4;j++)
        {

        if(j>=5-i){
            printf("%c",n+64);
            n++;}
       
        }

        printf("\n");
}return 0;
}
