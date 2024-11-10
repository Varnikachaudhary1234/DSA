#include<stdio.h>
int main()
{
    char ch;
    printf("enter any number from 0 to 9 or a lower case,upper case character or a special character ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c is a upper case character",ch);
    else if(ch>='a'&&ch<='z')
        printf("%c is the lowercase character",ch);
    else if(ch>='0'&& ch<='9')
        printf("%c is the number",ch);
    else
        printf("%c is a special character",ch);
return 0;
}
