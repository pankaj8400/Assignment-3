#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a string: ");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z')
     printf("lower case");

    else if(ch>='A'&&ch<='Z')
     printf("Upper case");

    else if(ch>='0'&&ch<='9')
     printf("Number");

    else
     printf("Special Symbol");

    return 0;
}
